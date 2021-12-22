#include <iostream>
using namespace std;
#define SPACE 10

class TreeNode
{
public:
    int value;
    TreeNode *left;
    TreeNode *right;

    TreeNode()
    {
        value = 0;
        left = NULL;
        right = NULL;
    }
    TreeNode(int v)
    {
        value = v;
        left = NULL;
        right = NULL;
    }
};

class AVL
{
public:
    TreeNode *root;

    AVL()
    {
        root = NULL;
    }

    // 1.isEmpty()
    bool isEmpty()
    {
        if (root == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    // height of a binary tree
    int height(TreeNode *r)
    {
        if (r == NULL)
        {
            return -1;
        }
        else
        {
            int lheight = height(r->left);
            int rheight = height(r->right);

            if (lheight > rheight)
            {
                return lheight + 1;
            }
            else
            {
                return rheight + 1;
            }
        }
    }

    TreeNode *minValueNode(TreeNode *node)
    {
        TreeNode *current = node;
        while (current->left != NULL)
        {
            current = current->left;
        }
        return current;
    }

    // get balance factor
    int getBalanceFactor(TreeNode *n)
    {
        if (n == NULL)
        {
            return -1;
        }
        return height(n->left) - height(n->right);
    }

    // right rotation
    TreeNode *rightRotate(TreeNode *y)
    {
        TreeNode *x = y->left;
        TreeNode *T2 = x->right;

        x->right = y;
        y->left = T2;

        return x;
    }

    // left rotation
    TreeNode *leftRotate(TreeNode *y)
    {
        TreeNode *x = y->right;
        TreeNode *T2 = x->left;

        x->left = y;
        y->right = T2;

        return x;
    }

    // 2.Insert node
    TreeNode *insert(TreeNode *r, TreeNode *node)
    {
        if (r == NULL)
        {
            r = node;
            cout << "Value inserted successfully" << endl;
            return r;
        }
        if (node->value < r->value)
        {
            r->left = insert(r->left, node);
        }
        else if (node->value > r->value)
        {
            r->right = insert(r->right, node);
        }
        else
        {
            cout << "No duplicates values allowed" << endl;
            return r;
        }

        int bf = getBalanceFactor(r);
        // Left Left Case
        if (bf > 1 && node->value < r->left->value)
        {
            return rightRotate(r);
        }
        // Right Right Case
        if (bf < -1 && node->value > r->right->value)
        {
            return leftRotate(r);
        }
        // Left Right Case
        if (bf > 1 && node->value > r->left->value)
        {
            r->left = leftRotate(r->left);
            return rightRotate(r);
        }
        // Right Left Case
        if (bf < -1 && node->value < r->right->value)
        {
            r->right = leftRotate(r->right);
            leftRotate(r);
        }

        return r;
    }

    // delete node
    TreeNode *deleteNode(TreeNode *r, int v)
    {
        if (r == NULL)
        {
            return NULL;
        }
        else if (v < r->value)
        {
            r->left = deleteNode(r->left, v);
        }
        else if (v > r->value)
        {
            r->right = deleteNode(r->right, v);
        }
        else
        {
            if (r->left == NULL)
            {
                TreeNode *temp = r->right;
                delete r;
                return temp;
            }
            else if (r->right == NULL)
            {
                TreeNode *temp = r->left;
                delete r;
                return temp;
            }
            else
            {
                TreeNode *temp = minValueNode(r->right);
                r->value = temp->value;
                r->right = deleteNode(r->right, temp->value);
            }
        }

        int bf = getBalanceFactor(r);
        // left left imbalance
        if (bf == 2 && getBalanceFactor(r->left) >= 0)
        {
            return rightRotate(r);
        }
        if (bf == 2 && getBalanceFactor(r->left) == -1)
        {
            r->left = leftRotate(r->left);
            return rightRotate(r);
        }
        if (bf == -2 && getBalanceFactor(r->right) <= 0)
        {
            return leftRotate(r);
        }
        if (bf == -2 && getBalanceFactor(r->right) == 1)
        {
            r->right = rightRotate(r->right);
            return leftRotate(r);
        }
        return r;
    }

    // printing 2d tree
    void print2D(TreeNode *r, int space)
    {
        if (r == NULL) // Base case  1
            return;
        space += SPACE;           // Increase distance between levels   2
        print2D(r->right, space); // Process right child first 3
        cout << endl;
        for (int i = SPACE; i < space; i++) // 5
            cout << " ";                    // 5.1
        cout << r->value;
        cout << endl;            // 6
        print2D(r->left, space); // Process left child  7
    }

    // {
    // traversal and printing
    // {
    // depth first traversal
    // preorder-traversal
    void printPreorder(TreeNode *r)
    {
        if (r == NULL)
        {
            return;
        }
        cout << r->value << " ";
        printPreorder(r->left);
        printPreorder(r->right);
    }

    // Inorder-traversal
    void printInorder(TreeNode *r)
    {
        if (r == NULL)
        {
            return;
        }
        printInorder(r->left);
        cout << r->value << " ";
        printInorder(r->right);
    }

    // Postorder-traversal
    void printPostorder(TreeNode *r)
    {
        if (r == NULL)
        {
            return;
        }
        printPostorder(r->left);
        printPostorder(r->right);
        cout << r->value << " ";
    }
    // }

    // breadth fisrt traversal
    void printGivenLevel(TreeNode *r, int level)
    {
        if (r == NULL)
        {
            return;
        }
        else if (level == 0)
        {
            cout << r->value << " ";
        }
        else
        {
            printGivenLevel(r->left, level - 1);
            printGivenLevel(r->right, level - 1);
        }
    }
    void printLevelOrderBFS(TreeNode *r)
    {
        int h = height(r);
        for (int i = 0; i <= h; i++)
        {
            printGivenLevel(r, i);
        }
    }
    //  }

    // searching in AVL
    TreeNode *iterativeSearch(int val)
    {
        if (root == NULL)
        {
            return root;
        }
        else
        {
            TreeNode *temp = root;
            while (temp != NULL)
            {
                if (temp->value == val)
                {
                    return temp;
                }
                else if (temp->value < val)
                {
                    temp = temp->right;
                }
                else
                {
                    temp = temp->left;
                }
            }
            return NULL;
        }
    }
};

int main()
{
    AVL obj;
    int option, val;

    do
    {
        cout << "What operation do you want to perform? "
             << " Select Option number. Enter 0 to exit." << endl;
        cout << "1. Insert Node" << endl;
        cout << "2. Search Node" << endl;
        cout << "3. Delete Node" << endl;
        cout << "4. Print/Traversal AVL values" << endl;
        cout << "5. Height of Tree" << endl;
        cout << "6. Clear Screen" << endl;
        cout << "0. Exit Program" << endl;

        cin >> option;
        TreeNode *node = new TreeNode();

        switch (option)
        {
        case 0:
            break;

        case 1:
            cout << "INSERT" << endl;
            cout << "Enter VALUE of TREE NODE to INSERT in AVL: ";
            cin >> val;
            node->value = val;
            obj.root = obj.insert(obj.root, node);
            cout << endl;
            break;

        case 2:
            cout << "SEARCH" << endl;
            cout << "Enter VALUE of TREE NODE to SEARCH in AVL: ";
            cin >> val;
            node = obj.iterativeSearch(val);
            if (node != NULL)
            {
                cout << "Value found" << endl;
            }
            else
            {
                cout << "Value NOT found" << endl;
            }
            break;
        case 3:
            cout << "DELETE" << endl;
            cout << "Enter VALUE of TREE NODE to DELETE in AVL: ";
            cin >> val;
            node = obj.iterativeSearch(val);
            if (node != NULL)
            {
                obj.root = obj.deleteNode(obj.root, val);
                cout << "Value Deleted" << endl;
            }
            else
            {
                cout << "Value NOT found" << endl;
            }
            break;
        case 4:
            cout << "PRINT 2D: " << endl;
            obj.print2D(obj.root, 5);
            cout << endl;
            cout << "Print Level Order BFS: \n";
            obj.printLevelOrderBFS(obj.root);
            cout << endl;
            cout << "PRE-ORDER: ";
            obj.printPreorder(obj.root);
            cout << endl;
            cout << "IN-ORDER: ";
            obj.printInorder(obj.root);
            cout << endl;
            cout << "POST-ORDER: ";
            obj.printPostorder(obj.root);
            cout << endl;
            break;
        case 5:
            cout << "TREE HEIGHT" << endl;
            cout << "Height : " << obj.height(obj.root) << endl;
            break;
        case 6:
            system("cls");
            break;
        default:
            cout << "Enter Proper Option number " << endl;
            break;
        }

    } while (option != 0);
    return 0;
}