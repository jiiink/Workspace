#include <bits/stdc++.h>
using namespace std;

struct Node {
    char val;
    int cost = 1;
    Node* next;
};

class Graph {
    Node* getAdjListNode(char value, Node* head) {
        Node* newNode = new Node;
        newNode->val = value;
        newNode->next = head;
        return newNode;
    }
public:
    map<char, Node*> head;
    Graph(vector<pair<char, char>> edges) {
        for (const auto& edge : edges) {
            char start_ver = edge.first;
            Node* newNode = getAdjListNode(edge.second, head[start_ver]);
            head[start_ver] = newNode;
        }
    }
    ~Graph() {
        for (auto& entry : head) {
            Node* current = entry.second;
            while (current != nullptr) {
                Node* next = current->next;
                delete current;
                current = next;
            }
        }
    }
};

vector<pair<char, char>> edges;
char f1, f2, f3;
int N;
void input() {
    cin >> N;
    cin >> f1 >> f2 >> f3;
    for (int i = 0; i < N; i++) {
        char c, start;
        cin >> start;
        while (cin >> c && c != '$')
            edges.emplace_back(start, c);
    }
}

vector<int> dijkstra(Graph& g, char start) {
    map<char, int> dist;
    for (auto& entry : g.head)
        dist[entry.first] = INT_MAX;
    #define pair_i_c pair<int, char>
    priority_queue<pair_i_c, vector<pair_i_c>, greater<pair_i_c>> pq;
    pq.push({0, start});
    dist[start] = 0;

    while (!pq.empty()) {
        int currentDist = pq.top().first;
        char u = pq.top().second;
        pq.pop();

        if (currentDist > dist[u])
            continue;

        for (Node* n = g.head.at(u); n != nullptr; n = n->next) {
            char v = n->val;

            if (currentDist%3 == 1) currentDist+=2; // when pass the intersection
            int newDist = currentDist + n->cost;

            if (newDist < dist[v]) {
                dist[v] = newDist;
                pq.push({newDist, v});
            }
        }
    }

    vector<int> distances;
    for (auto& entry : dist)
        distances.push_back(entry.second);
    return distances;
}

map<char, vector<int>> fs;
void getDist(Graph& g) {
    array<char, 3> friends = {f1, f2, f3};
    for (const auto& entry : friends)
        fs[entry] = dijkstra(g, entry);
}

// bool mycomp(const pair<char, int> &lhs, const pair<char, int> &rhs) {
//     return lhs.second < rhs.second;
// }

void findMinNode(Graph g) {
    map<char, int> max_of_tuple;
    auto it = g.head.begin();
    for (int col=0; col<N; col++) {
        vector<int> t;
        for (auto& f : fs) 
            t.push_back(f.second[col]);
        max_of_tuple[(*it++).first] = *max_element(t.begin(), t.end());
    }
    // pair<char, int> min = *min_element(max_of_tuple.begin(), max_of_tuple.end(), mycomp);
    pair<char, int> min = *min_element(max_of_tuple.begin(), max_of_tuple.end(), [](const pair<char, int> &lhs, const pair<char, int> &rhs) {
        return lhs.second < rhs.second;
    });
    if (min.second == INT_MAX)
        min = {'@', -1};
    cout << min.first << endl << min.second << endl;
}

int main() {
    input();
    Graph g(edges);
    getDist(g);
    findMinNode(g);

    return 0;
}
