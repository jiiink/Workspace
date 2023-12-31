// queue::emplace
#include <iostream>       // cin, cout
#include <queue>          // queue
#include <string>         // string, getline(string)
using namespace std ;

void Prt_Q( string msg, queue<int> X ){
    cout << "\n Queue " << msg << ":";
    while( !X.empty()) {
        cout <<   "-- " << X.front()  ;
        X.pop() ;
    }

}

// �� ���� queue Q1, Q2�� ���� �� Q1 = Q2 �۾��� ����

int main () {

   deque<int> myD {11, 12, 13, 14, 15, 16, 17} ;
   queue<int> myQ(myD) ;
   queue<int> Q1, Q2 ;

   Prt_Q(" 1. myQ= ", myQ ) ;
   Prt_Q(" 2. Q1 = ", Q1  ) ;

   Q1 = myQ ;  // myQ�� ������ Q1���� �����ϴ� ��.
   myQ.pop() ;
   Prt_Q(" 3. myQ= ", myQ ) ;
   Prt_Q(" 4. Q1 = ", Q1  ) ;

  return 0;
}
