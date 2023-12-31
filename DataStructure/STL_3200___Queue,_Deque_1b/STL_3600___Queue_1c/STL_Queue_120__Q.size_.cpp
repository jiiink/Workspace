// queue::emplace
#include <iostream>       // cin, cout
#include <queue>          // queue
#include <string>         // string, getline(string)
using namespace std ;


int main () {
    queue<string> myqueue;

    myqueue.emplace ("�ٳ���");
    myqueue.emplace ("�丶��");
    myqueue.emplace ("�ڸ�");
    myqueue.emplace ("���ξ���");

    cout << "myqueue[ ] = ���빰 :\n";
    while (!myqueue.empty()) {
        cout << "\n front()= " << myqueue.front() ;
        myqueue.pop();
        cout << " �׶��� Q size= " << myqueue.size() << '\n' ;
    }

    return 0;
}
