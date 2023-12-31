#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector< pii > vii;
#define INF 0x3f3f3f3f

vii *G;   // Graph
vi Dist;  // distance of every other node from source.

void Dijkstra(int source, int N) {
    priority_queue<pii, vector<pii>, greater<pii> > Q;   // min heap
    Dist.assign(N,INF);
    Dist[source] = 0;
    Q.push({0,source});
    while(!Q.empty()){
        int u = Q.top().second;
        Q.pop();
        for(auto &c : G[u]){
            int v = c.first;
            int w = c.second;
            if(Dist[v] > Dist[u]+w){
                Dist[v] = Dist[u]+w;
                Q.push({Dist[v],v});
            }
        }
    }
}  // end of Dijkstra( )


int main() {
    int N, M, u, v, w, source;  // nodes=N edges=M,
    cout << "������ ���� edge�� ���� �Է�  n m :" ;
    cin >> N >> M;              // (u,v) with weight w
    G = new vii[N+1];

    for(int i=0;i<M;++i){
        cout << "edge " <<  i << ": (u,v,w)�� �� u v w�� �Է�:"   ;
        cin >> u >> v >> w;
        G[u].push_back({v,w});
        G[v].push_back({u,w});
    }
    cout << "������� �Է��Ͻÿ�(0): " ;
    cin >> source;
    Dijkstra(source,N);

    cout << "��������κ��� ��� �������� �Ÿ�:" ;
    for(int i=0;i<N;i++)
        cout<< "\n �Ÿ� [" << source << ", " << i << "]=" << Dist[i]<<" ";
    cout<<endl;

    return 0;
}
