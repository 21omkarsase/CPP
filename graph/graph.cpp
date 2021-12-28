// undirectd && wighted

#include <iostream>
#include <vector>
#include <list>
#include <iterator>

using namespace std;

class Edge
{
public:
    int DestinationVertexID;
    int weight;

    Edge()
    {
    }

    Edge(int destVID, int w)
    {
        DestinationVertexID = destVID;
        weight = w;
    }

    void setEdgeValues(int destVID, int w)
    {
        DestinationVertexID = destVID;
        weight = w;
    }

    void setWeight(int w)
    {
        weight = w;
    }

    int getDestinationVertexID()
    {
        return DestinationVertexID;
    }

    int getWeight()
    {
        return weight;
    }
};

class Vertex
{
public:
    int state_id;
    string state_name;
    list<Edge> edgeList;

    Vertex()
    {
        state_id = 0;
        state_name = "";
    }

    Vertex(int id, string sname)
    {
        state_id = id;
        state_name = sname;
    }

    void setId(int id)
    {
        state_id = id;
    }

    void setStateName(string name)
    {
        state_name = name;
    }

    int getStateID()
    {
        return state_id;
    }

    string getStateName()
    {
        return state_name;
    }

    list<Edge> getEdgeList()
    {
        return edgeList;
    }

    void printEdgeList()
    {
        cout << "[";
        for (auto it = edgeList.begin(); it != edgeList.end(); it++)
        {
            cout << it->getDestinationVertexID() << "(" << it->getWeight() << ") --> ";
        }
        cout << "]";
        cout << endl;
    }
};

class Graph
{
public:
    vector<Vertex> vertices;

    // check if vertext exist by id
    bool checkIfVertexExistById(int vid)
    {
        for (int i = 0; i < vertices.size(); i++)
        {
            if (vertices.at(i).getStateID() == vid)
            {
                return true;
            }
        }
        return false;
    }

    // add vertex to vertices vector
    void addVertex(Vertex newVertex)
    {
        bool check = checkIfVertexExistById(newVertex.getStateID());

        if (check == true)
        {
            cout << "Vertex with this ID already exist" << endl;
        }
        else
        {
            vertices.push_back(newVertex);
            cout << "New Vertex added successfully" << endl;
        }
    }

    // add edge list by id
    void addEdgeByID(int fromVertex, int toVertex, int weight)
    {
        bool check1 = checkIfVertexExistById(fromVertex);
        bool check2 = checkIfVertexExistById(toVertex);
        if ((check1 && check2) == true)
        {
            bool check3 = checkIfVertexExistById(fromVertex, toVertex);
        }
    }

    // print graph
    void printGraph()
    {
        for (int i = 0; i < vertices.size(); i++)
        {
            Vertex temp;
            temp = vertices.at(i);
            cout << temp.getStateName() << " (" << temp.getStateID() << ") --> ";
            temp.printEdgeList();
        }
    }
};

int main()
{
    int option, id1;
    Graph g;
    Vertex v1;
    string sname;
    do
    {
        cout << "What operation do you want to perform? "
             << " Select Option number. Enter 0 to exit." << endl;
        cout << "1. Add Vertex" << endl;
        cout << "2. Update Vertex" << endl;
        cout << "3. Delete Vertex" << endl;
        cout << "4. Add Edge" << endl;
        cout << "5. Update Edge" << endl;
        cout << "6. Delete Edge" << endl;
        cout << "7. Check if 2 Vertices are Neigbors" << endl;
        cout << "8. Print All Neigbors of a Vertex" << endl;
        cout << "9. Print Graph" << endl;
        cout << "10. Clear Screen" << endl;
        cout << "0. Exit Program" << endl;

        cin >> option;
        // Vertex v1;

        switch (option)
        {
        case 0:
            break;

        case 1:
            cout << "Add Vertex Operation - \nEnter State ID : ";
            cin >> id1;
            cout << "Enter State Name : ";
            cin >> sname;
            v1.setId(id1);
            v1.setStateName(sname);
            g.addVertex(v1);
            break;

        case 2:
            break;

        case 3:
            break;

        case 4:
            break;

        case 5:
            break;

        case 6:
            break;

        case 7:
            break;

        case 8:
            break;

        case 9:
            g.printGraph();
            break;

        default:
            cout << "Enter Proper Option number " << endl;
            break;
        }
        cout << endl;
    } while (option != 0);

    return 0;
}