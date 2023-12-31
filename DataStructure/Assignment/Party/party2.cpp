#include <bits/stdc++.h>
using namespace std;


/*
    will make it with char

    maybe map or dict ?
*/

// stores adjacency list items
struct adjNode {
    char val;
    int cost;
    adjNode* next;
};
// structure to store edges
struct graphEdge {
    int start_ver, end_ver, weight;
};

class DiaGraph {
    // insert new nodes into adjacency list from given graph
    adjNode* getAdjListNode(char value, int weight, adjNode* head) {
        adjNode* newNode = new adjNode;
        newNode->val = value;
        newNode-> cost = weight;

        newNode->next = head; // point new node to current head
        return newNode;
    }
    int N; // number of nodes in the graph
public:
    // adjNode **head; // adjacency list as array of pointers
    map<char, adjNode*> head;
    // Constructor
    DiaGraph() {}
    // DiaGraph(graphEdge edges[], int n, int N) {
    DiaGraph(vector<pair<char, char>> edges, int n, int N) {    
        // allocate new node
        // head = new adjNode*[N]();
        this->N = N;
        // initialize head pointer for all vertices
        // for (int i=0; i<N; ++i)
        //     head[i] = nullptr;
        // construct directed graph by adding edges to it
        for (unsigned i=0; i<n; i++) {
            // int start_ver = edges[i].first;
            // int end_ver = edges[i].second;
            int weight = 1;
            char start_ver = edges[i].first;
            char end_ver = edges[i].second;
            // insert in the beginning
            adjNode* newNode = getAdjListNode(end_ver, weight, head[start_ver]);

            // point head pointer to new node
            head[start_ver] = newNode;
        }
        // Destructor
        // ~DiaGraph() {
        //     for (int i=0; i<N; i++) {
        //         delete[] head[i];
        //         delete[] head;
        //     }
        // }
    }
};


// print all adjacent vertices of given vertex
void display_AdjList(adjNode* ptr, char c) {
    while (ptr != nullptr) {
        cout << "(" << c << ", " << ptr->val
            << ", " << ptr->cost << ") ";
        ptr = ptr->next;
    }
    cout << endl;
}


vector< vector<char> > graph;

void input() {
    int N;
    cin >> N;
    
    char f1, f2, f3;
    cin >> f1 >> f2 >> f3;

    for (int i=0; i<N; i++) {
        char currentChar;
        std::vector<char> characters;
        // Read characters until '$' is encountered
        while (std::cin >> currentChar && currentChar != '$') {
            // Store the characters in a vector
            characters.push_back(currentChar);
        }
        graph.push_back(characters);
    }

    cout << "Number of vertex : " << N << endl;
    cout << "Friends: " << f1 << " " << f2 << " " << f3 << endl;
    for (auto n : graph) { // print graph
        for (auto c : n) {
            cout << c << " ";
        }
        cout << endl;
    }
    cout << endl;
}

vector< pair<char, char> > edges;
void makeEdge() {
    for (auto& c : graph) {
        for (int i=1; i<c.size(); i++) {
            pair<char, char> edge(c[0], c[i]);
            edges.push_back(edge);
        }
    }
}

// graph implementation
int main() {

    input();

    makeEdge();

    int N = graph.size(); // Number of vertices in the graph
    // calculate number of edges
    int n = edges.size();
    // construct graph
    DiaGraph diagraph(edges, n, N);
    // print adjacency list representation of graph
    cout << "Graph adjacency list " << endl << "(start_vertex, end_vertex, weight):" << endl;
    // for (int i=0; i<N; i++) {
    //     // display adjacent vertices of vertex i
    //     display_AdjList(diagraph.head[i], i);
    // }
    for (auto& a : diagraph.head) {
        // cout << a.first << " ";
        display_AdjList(a.second, a.first);
    }

    return 0;
}