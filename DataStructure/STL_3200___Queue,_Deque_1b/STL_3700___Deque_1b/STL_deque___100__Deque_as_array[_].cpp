#include <bits/stdc++.h>
using namespace std;
#define allout(MSG,X)   cout<< MSG<<": ";for(auto w:X)cout<<w<<", "

int main() {

    deque <int> dq = { 5, 6, 7, -5, -4, -3, 100 };

    int i = 1;
     for(auto w : dq) {
        cout << "\n "<< ++i << ") " << w ;
    }

    allout("\n 1. dq[ ] ���� = ", dq ) ;

    dq[3] += 10000 ; // random access�� ����.

    allout("\n 2. dq[ ] ���� = ", dq ) ;

    dq.resize(3) ;
    allout("\n 3. dq[ ] ���� = ", dq ) ;

}
