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

class BST
{
public:
    TreeNode *root;

    BST()
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

    // 2.Insert node
    void insertNode(TreeNode *node)
    {
        if (root == NULL)
        {
            root = node;
            cout << "Value inserted as a root nde" << endl;
        }
        else
        {
            TreeNode *temp = root;
            while (temp != NULL)
            {
                if (node->value == temp->value)
                {
                    cout << "Value already exists"
                         << " Insert another value" << endl;
                    return;
                }
                else if ((node->value < temp->value) && (temp->left == NULL))
                {
                    temp->left = node;
                    cout << "Value inserted to left" << endl;
                    break;
                }
                else if (node->value < temp->value)
                {
                    temp = temp->left;
                }
                else if ((node->value > temp->value) && (temp->right == NULL))
                {
                    temp->right = node;
                    cout << "Value inserted to right" << endl;
                    break;
                }
                else
                {
                    temp = temp->right;
                }
            }
        }
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

    // searching in BST
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

    // delete node
    TreeNode *minValNode(TreeNode *node)
    {
        TreeNode *current = node;
        while (current->left != NULL)
        {
            current = current->left;
        }
        return current;
    }

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
                TreeNode *temp = minValNode(r->right);
                r->value == temp->value;
                r->right = deleteNode(r->right, temp->value);
            }
        }
        return r;
    }
};

int main()
{
    BST obj;
    int option, val;

    do
    {
        cout << "What operation do you want to perform? "
             << " Select Option number. Enter 0 to exit." << endl;
        cout << "1. Insert Node" << endl;
        cout << "2. Search Node" << endl;
        cout << "3. Delete Node" << endl;
        cout << "4. Print/Traversal BST values" << endl;
        cout << "5. Height of Tree" << endl;
        cout << "6. Clear Screen" << endl;
        cout << "0. Exit Program" << endl;

        cin >> option;
        // Node n1;
        TreeNode *node = new TreeNode();

        switch (option)
        {
        case 0:
            break;
        case 1:
            cout << "INSERT" << endl;
            cout << "Enter VALUE of TREE NODE to INSERT in BST: ";
            cin >> val;
            node->value = val;
            // obj.root = obj.insertRecursive(obj.root, node);
            obj.insertNode(node);
            cout << endl;
            break;

        case 2:
            cout << "SEARCH" << endl;
            cout << "Enter VALUE of TREE NODE to SEARCH in BST: ";
            cin >> val;
            node = obj.iterativeSearch(val);
            // node = obj.recursiveSearch(obj.root, val);
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
            cout << "Enter VALUE of TREE NODE to DELETE in BST: ";
            cin >> val;
            node = obj.iterativeSearch(val);
            if (node != NULL)
            {
                obj.deleteNode(obj.root, val);
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