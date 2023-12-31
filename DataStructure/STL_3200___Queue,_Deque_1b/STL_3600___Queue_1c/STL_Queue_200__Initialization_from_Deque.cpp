#include <bits/stdc++.h>
using namespace std;


template <typename T>
void dump_Q(string MSG, std::queue<T> myQ) {
  std::cout <<"\n" << MSG  ;
  if ( myQ.empty() ) cout << "��.. ����ִ� Queue!" ;
  while (!myQ.empty()) {
    T top = myQ.front();
    myQ.pop();
    std::cout << top << " , ";
  }
}


int main() {
   // queue <int> myQ { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
   // �̷��� �ϸ� �ȵȴ�. ������....stack�� queue�� container�� �ƴϰ� adaptor������.

   deque<int>  myD {11, 12, 13, 14, 15, 16, 17} ;
   deque<string> herD {"��", "��", "��", "��", "��", "��"} ;
   queue<int, deque<int>> myQ ( myD ) ;

   dump_Q( "myQ[]= ", myQ ) ;

   queue<int> yourQ ;
   yourQ = myQ ;
   dump_Q("yourQ[]= ", yourQ ) ;

   queue<string, deque<string>> herQ(herD) ;
   dump_Q("herQ[]= ", herQ ) ;
}
