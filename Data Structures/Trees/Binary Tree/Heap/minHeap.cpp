#include <iostream>
#include <math.h>
using namespace std;

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

class MinHeap
{
public:
    int *harr;
    int capacity;
    int heap_size;

    MinHeap(int cap)
    {
        heap_size = 0;
        capacity = cap;
        harr = new int[cap];
    }

    // linear search
    void linearSearch(int val)
    {
        for (int i = 0; i < heap_size; i++)
        {
            if (harr[i] == val)
            {
                cout << "value found!" << endl;
                return;
            }
        }
        cout << "value not found!" << endl;
    }

    // print heap
    void printHeap()
    {
        for (int i = 0; i < heap_size; i++)
        {
            cout << harr[i] << " ";
        }
        cout << endl;
    }

    // height of a tree
    int height()
    {
        return ceil(log2(heap_size + 1) - 1);
    }

    // parent node
    int parent(int i)
    {
        return (i - 1) / 2;
    }

    // left node
    int left(int i)
    {
        return (2 * i + 1);
    }

    // right node
    int right(int i)
    {
        return (2 * i + 2);
    }

    // insert
    void insertKey(int k)
    {
        if (heap_size == capacity)
        {
            cout << "coutld not insert key" << endl;
            return;
        }

        heap_size++;
        int i = heap_size - 1;
        harr[i] = k;

        while (i != 0 && harr[parent(i)] > harr[i])
        {
            swap(harr[i], harr[parent(i)]);
            i = parent(i);
        }
    }

    void minHeapify(int i)
    {
        int l = left(i);
        int r = right(i);
        int smallest = i;
        if (l < heap_size && harr[l] < harr[i])
        {
            smallest = l;
        }
        if (r < heap_size && harr[r] < harr[smallest])
        {
            smallest = r;
        }
        if (smallest != i)
        {
            swap(harr[i], harr[smallest]);
            minHeapify(smallest);
        }
    }

    // extractMin() -->to remove minimum element (root)
    int extractMin()
    {
        if (heap_size <= 0)
        {
            return INT_MAX;
        }
        if (heap_size == 1)
        {
            heap_size--;
            return harr[0];
        }

        int root = harr[0];
        harr[0] = harr[heap_size - 1];
        heap_size--;
        minHeapify(0);
        return root;
    }

    // delete heap element
    void decreaseKey(int i, int val)
    {
        harr[i] = val;
        while (i != 0 && harr[parent(i)] > harr[i])
        {
            swap(harr[i], harr[parent(i)]);
            i = parent(i);
        }
    }

    void deleteByKey(int i)
    {
        decreaseKey(i, INT_MIN);
        extractMin();
    }
};

int main()
{
    int s;
    cout << "Enter size of min heap" << endl;
    cin >> s;
    MinHeap *obj = new MinHeap(s);
    cout << "Min heap created" << endl;

    int option, val;

    do
    {
        cout << "What operation do you want to perform? "
             << " Select Option number. Enter 0 to exit." << endl;
        cout << "1. Insert Node" << endl;
        cout << "2. Search Node" << endl;
        cout << "3. Delete Node" << endl;
        cout << "4. Extract min" << endl;
        cout << "5. Height of heap" << endl;
        cout << "6. Print/Traversal heap values" << endl;
        cout << "7. Clear screen" << endl;
        cout << "0. Exit Program" << endl;

        cin >> option;

        switch (option)
        {
        case 0:
            break;
        case 1:
            cout << "INSERT Operation -" << endl;
            cout << "Enter VALUE to INSERT in HEAP: ";
            cin >> val;
            obj->insertKey(val);
            cout << endl;
            break;
        case 2:
            cout << "SEARCH Operation -" << endl;
            cout << "Enter VALUE to SEARCH in HEAP: ";
            cin >> val;
            obj->linearSearch(val);
            break;
        case 3:
            cout << "DELETE Operation -" << endl;
            cout << "Enter INDEX of Heap Array to DELETE: ";
            cin >> val;
            obj->deleteByKey(val);
            break;
        case 4:
            cout << "EXTRACT Min value : " << obj->extractMin();
            cout << endl;
            break;
        case 5:
            cout << "HEAP TREE HEIGHT : " << obj->height() << endl;
            break;

        case 6:
            cout << "PRINT Heap Array : " << endl;
            obj->printHeap();
            cout << endl;
            break;

        case 7:
            system("cls");
            break;

        default:
            cout << "Enter Proper Option number " << endl;
            break;
        }

    } while (option != 0);

    return 0;
}