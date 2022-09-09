// undirectd && wighted

#include <iostream>
#include <vector>
#include <queue>
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

    // get vertex by id
    Vertex getVertexByID(int vid)
    {
        Vertex temp;
        for (int i = 0; i < vertices.size(); i++)
        {
            temp = vertices.at(i);
            if (temp.getStateID() == vid)
            {
                return temp;
            }
        }
        return temp;
    }

    // check if edge exist by IDs
    bool checkIfEdgeExistByID(int fromVertex, int toVertex)
    {
        Vertex v = getVertexByID(fromVertex);
        list<Edge> e;
        e = v.getEdgeList();
        for (auto it = e.begin(); it != e.end(); it++)
        {
            if (it->getDestinationVertexID() == toVertex)
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
            bool check3 = checkIfEdgeExistByID(fromVertex, toVertex);
            if (check3 == true)
            {
                cout << "Edge between " << getVertexByID(fromVertex).getStateName() << " (" << fromVertex << " ) and " << getVertexByID(toVertex).getStateName() << " (" << toVertex << ") already exists" << endl;
            }
            else
            {
                for (int i = 0; i < vertices.size(); i++)
                {
                    if (vertices.at(i).getStateID() == fromVertex)
                    {
                        Edge e(toVertex, weight);
                        vertices.at(i).edgeList.push_back(e);
                    }
                    else if (vertices.at(i).getStateID() == toVertex)
                    {
                        Edge e(fromVertex, weight);
                        vertices.at(i).edgeList.push_back(e);
                    }
                }
                cout << "Edge between " << fromVertex << " and " << toVertex << " added successfully" << endl;
            }
        }
        else
        {
            cout << "Invalid vertex  ID entered" << endl;
        }
    }

    // update vertex
    void updateVertex(int oldVID, string vname)
    {
        bool check = checkIfVertexExistById(oldVID);
        if (check)
        {
            for (int i = 0; i < vertices.size(); i++)
            {
                if (vertices.at(i).getStateID() == oldVID)
                {
                    vertices.at(i).setStateName(vname);
                    break;
                }
            }
            cout << "Vertex(state) updated successfully" << endl;
        }
        else
        {
            cout << "Vertex with ID : " << oldVID << " doesn't exist" << endl;
        }
    }

    // delete vertex by id
    void deleteVertexByID(int vid)
    {
        bool check = checkIfVertexExistById(vid);
        if (check)
        {
            int vIndex = 0;
            for (int i = 0; i < vertices.size(); i++)
            {
                if (vertices.at(i).getStateID() == vid)
                {
                    vIndex = i;
                }
                for (int i = 0; i < vertices.size(); i++)
                {
                    for (auto it = vertices.at(i).edgeList.begin(); it != vertices.at(i).edgeList.end(); it++)
                    {
                        if (it->getDestinationVertexID() == vid)
                        {
                            vertices.at(i).edgeList.erase(it);
                            break;
                        }
                    }
                }
            }
            vertices.erase(vertices.begin() + vIndex);
            cout << "Vertex deleted successfully" << endl;
        }
        else
        {
            cout << "Vertex with ID : " << vid << " doesn't exist" << endl;
        }
    }

    // delete edge useing IDs
    void deleteEdgeByIds(int fromVertex, int toVertex)
    {
        bool check = checkIfEdgeExistByID(fromVertex, toVertex);
        if (check)
        {
            for (int i = 0; i < vertices.size(); i++)
            {
                if (vertices.at(i).getStateID() == fromVertex)
                {
                    for (auto it = vertices.at(i).edgeList.begin(); it != vertices.at(i).edgeList.end(); it++)
                    {
                        if (it->getDestinationVertexID() == toVertex)
                        {
                            vertices.at(i).edgeList.erase(it);
                            break;
                        }
                    }
                }

                if (vertices.at(i).getStateID() == toVertex)
                {
                    for (auto it = vertices.at(i).edgeList.begin(); it != vertices.at(i).edgeList.end(); it++)
                    {
                        if (it->getDestinationVertexID() == fromVertex)
                        {
                            vertices.at(i).edgeList.erase(it);
                            break;
                        }
                    }
                }
            }
            cout << "Edge Between " << fromVertex << " and " << toVertex << " Deleted Successfully." << endl;
        }
        else
        {
            cout << "edge doesn't exist between" << fromVertex << " and " << toVertex << endl;
        }
    }

    // update edge by Ids
    void updateEdgeByIDs(int fromVertex, int toVertex, int nWeight)
    {
        bool check = checkIfEdgeExistByID(fromVertex, toVertex);
        if (check)
        {
            for (int i = 0; i < vertices.size(); i++)
            {
                if (vertices.at(i).getStateID() == fromVertex)
                {
                    for (auto it = vertices.at(i).edgeList.begin(); it != vertices.at(i).edgeList.end(); it++)
                    {
                        if (it->getDestinationVertexID() == toVertex)
                        {
                            it->setWeight(nWeight);
                            break;
                        }
                    }
                }
                else if (vertices.at(i).getStateID() == toVertex)
                {
                    for (auto it = vertices.at(i).edgeList.begin(); it != vertices.at(i).edgeList.end(); it++)
                    {
                        if (it->getDestinationVertexID() == fromVertex)
                        {
                            it->setWeight(nWeight);
                            break;
                        }
                    }
                }
            }
            cout << "Edge Weight Updated Successfully " << endl;
        }
        else
        {

            cout << "edge doesn't exist between" << fromVertex << " and " << toVertex << endl;
        }
    }

    // print all neighbour vertices by ID
    void getAllNeigborsByID(int vid)
    {
        if (checkIfVertexExistById(vid))
        {
            cout << getVertexByID(vid).getStateName() << " (" << getVertexByID(vid).getStateID() << ") --> ";
            for (int i = 0; i < vertices.size(); i++)
            {
                if (vertices.at(i).getStateID() == vid)
                {
                    cout << "[ ";
                    for (auto it = vertices.at(i).edgeList.begin(); it != vertices.at(i).edgeList.end(); it++)
                    {
                        cout << it->getDestinationVertexID() << " (" << it->getWeight() << ") -->";
                    }
                    cout << " ]";
                    break;
                }
            }
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

    // BFS Traversal
    void printBFS()
    {
        queue<string> q;
        q.push(vertices.at(0));
        while (!q.empty)
        {
        }
    }
};

int main()
{
    int option, id1, id2, w;
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
        cout << "10. BFS Traversal" << endl;
        cout << "11. DFS Traversal" << endl;
        cout << "12. Clear Screen" << endl;
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
            cout << "Update Vertex Operation -" << endl;
            cout << "Enter State ID of Vertex(State) to update :";
            cin >> id1;
            cout << endl;
            cout << "Enter state name : ";
            cin >> sname;
            cout << endl;
            g.updateVertex(id1, sname);
            break;

        case 3:
            cout << "Delete Vertex Operation -" << endl;
            cout << "Enter ID of Vertex(State) to Delete : ";
            cin >> id1;
            cout << endl;
            g.deleteVertexByID(id1);
            break;

        case 4:
            cout << "Add edge operation -" << endl;
            cout << "Enter ID of source vertex(state) : ";
            cin >> id1;
            cout << endl;
            cout << "Enter ID of destination vertex(state) : ";
            cin >> id2;
            cout << endl;
            cout << "Enter weight of edge : ";
            cin >> w;
            g.addEdgeByID(id1, id2, w);
            break;

        case 5:
            cout << "Update Edge Operation -" << endl;
            cout << "Enter ID of Source Vertex(State): ";
            cin >> id1;
            cout << "Enter ID of Destination Vertex(State): ";
            cin >> id2;
            cout << "Enter UPDATED Weight of Edge: ";
            cin >> w;
            g.updateEdgeByIDs(id1, id2, w);
            break;

        case 6:
            cout << "Delete Edge Operation -" << endl;
            cout << "Enter ID of Source Vertex(State): ";
            cin >> id1;
            cout << "Enter ID of Destination Vertex(State): ";
            cin >> id2;
            g.deleteEdgeByIds(id1, id2);
            break;

        case 7:
            cout << "Check if 2 Vertices are Neigbors -" << endl;
            cout << "Enter ID of Source Vertex(State): ";
            cin >> id1;
            cout << "Enter ID of Destination Vertex(State): ";
            cin >> id2;
            if (g.checkIfEdgeExistByID(id1, id2))
            {
                cout << "Vertices are Neigbors (Edge exist)";
            }
            else
            {
                cout << "Vertices are NOT Neigbors (Edge does NOT exist)";
            }
            break;
        case 8:
            cout << "Print All Neigbors of a Vertex -" << endl;
            cout << "Enter ID of Vertex(State) to fetch all Neigbors : ";
            cin >> id1;
            g.getAllNeigborsByID(id1);
            break;

        case 9:
            g.printGraph();
            break;

        case 10:
            break;

        case 11:
            break;

        case 12:
            system("cls");
            break;

        default:
            cout << "Enter Proper Option number " << endl;
            break;
        }
        cout << endl;
    } while (option != 0);

    return 0;
}