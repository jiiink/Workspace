// ���� �Ϲ����� ������ Graph �ڷᱸ��
#include <iostream>
#include <vector>
using namespace std;

struct Edge { // ����(direct edge)
    int u, v;
};

class Graph {
  public:
    vector<vector<int>> adjList; // ���� ������ ����Ʈ�� vector of vectors

    Graph(vector<Edge> const &edges, int N) { // �׷��� ������,.
        adjList.resize(N); // �ʿ��� ũ�⸸ŭ vector�� ����
        for (auto &edge: edges) {
            adjList[edge.u].push_back(edge.v);  // insert (u,v) at vector[u]
            adjList[edge.v].push_back(edge.u);  // �ѹ� �� insert (u,v) at vector[v]
        }
    }
};  // end of Graph( )

void printGraph(Graph const& graph, int N) { // print adjacency list
    for (int i = 0; i < N; i++) { // print current vertex number
        cout << i << " --> ";
        for (int v : graph.adjList[i])   // �̿� vertex�� ��� ���
            cout << v << " ";
        cout << endl;
    }
}

int main() {
    vector<Edge> edges = {  // �ʱ� �׷����� ���Ե� edge
        { 0, 1 }, { 1, 2 }, { 2, 0 }, { 2, 3 }, {2, 7},
        { 1, 3 }, { 0, 3 }, { 4, 5 }, { 4, 6 }, {5, 6} };

    int N = 8;              // Number of nodes, �ִ��ȣ + 1 = 6 + 1 = 7
    Graph graph(edges, N);  // N�� vertex�� �׷����� ������.
    printGraph(graph, N);   // �׷����� ��� edge�� �����.

    /* �����п� �ؾ� �� ��.
    connected( graph, u   ) ; // u�� ����� ��� vertex
    distance ( graph, u, v) ; // �׷��� G���� u�� v�� �Ÿ�
    */

    return 0;
}
