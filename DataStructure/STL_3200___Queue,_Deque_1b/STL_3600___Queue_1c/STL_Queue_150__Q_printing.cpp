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

template <typename T>  // ��ü�� reference�� �޴´�....
void act_dump_Q(string MSG, std::queue<T> &myQ) {
  std::cout <<"\n" << MSG  ;
  if ( myQ.empty() ) cout << "��.. ����ִ� Queue!" ;
  while (!myQ.empty()) {
    T top = myQ.front();
    myQ.pop();
    std::cout << top << " , ";
  }
}




int main() {

  queue <string > Q;  // Queue q�� ����� �� ������ list�� �Ѵ�.

  for( string c : {"��", "��", "��", "��", "��", "��", "��", "��", "��" })
         Q.push(c);

  cout << "01. ť�� ���� ������() = " << Q.size() << endl;

  dump_Q( "1. Q[]= ",  Q ) ;
  dump_Q( "2. Q[]= ",  Q ) ;
  act_dump_Q(  "3. Q[]= ",  Q ) ;
  act_dump_Q(  "4. Q[]= ",  Q ) ;
  return 0;
}
