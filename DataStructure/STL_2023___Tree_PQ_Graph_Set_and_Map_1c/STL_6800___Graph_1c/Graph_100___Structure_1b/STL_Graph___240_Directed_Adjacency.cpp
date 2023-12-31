#include <iostream>
#include <vector>
using namespace std;

struct Edge { // ���� ����(direct edge)
    int src, dest;
};

class dGraph {
  public:
    vector<vector<int>> adjList; // ���� ������ ����Ʈ�� vector of vectors

    dGraph(vector<Edge> const &edges, int N) { //������,.
        adjList.resize(N); // �ʿ��� ũ�⸸ŭ vector�� ����
        for (auto &edge: edges) {   // ������ directed graph�� �߰���.
            adjList[edge.src].push_back(edge.dest);  // insert at the end
            // undirected graph�̸� �Ʒ��� ����ؾ� ��. (1,2)�� (2,1)�� �߰� ��.
            // adjList[edge.dest].push_back(edge.src);
        }
    }
};  // end of dGraph( )

void print_dGraph(dGraph const& graph, int N) { // print adjacency list
    for (int i = 0; i < N; i++) { // print current vertex number
        cout << i << " --> ";
        for (int v : graph.adjList[i])   // �̿� vertex�� ��� ���
            cout << v << " ";
        cout << endl;
    }
}

int main() {
    vector<Edge> edges = {  // �ʱ� �׷���
        { 0, 1 }, { 1, 2 }, { 2, 0 }, { 2, 1 },
        { 3, 2 }, { 4, 5 }, { 5, 4 }, {2, 6},
    };

    int N = 7;   // Number of nodes in the graph
    dGraph graph(edges, N);  // N�� vertex�� �׷����� ������.
    print_dGraph (graph, N);   // �׷����� �����.

    return 0;
}
