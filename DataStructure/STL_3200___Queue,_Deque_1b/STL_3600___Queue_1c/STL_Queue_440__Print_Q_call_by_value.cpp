// queue::emplace
#include <iostream>       // cin, cout
#include <queue>          // queue
#include <string>         // string, getline(string)
using namespace std ;

void Pqueue( string msg, queue<int> X ){
    cout << "\n Queue " << msg << ":";
    while( !X.empty()) {
        cout <<   "-- " << X.front()  ;
        X.pop() ;
    }

}

int main () {

  queue<int> foo,bar, temp ;
  foo.push (10); foo.push(20); foo.push(30);
  bar.push (111); bar.push(222);

  Pqueue("�ٲٱ��� foo", foo ) ;
  Pqueue("�ٲٱ��� foo", bar ) ;

  foo.swap(bar);


  Pqueue("�ٲ� �� foo", foo ) ;
  Pqueue("�ٲ� �� bar", bar ) ;

  cout << "size of foo: " << foo.size() << '\n';
  cout << "size of bar: " << bar.size() << '\n';

  temp = bar ;
  Pqueue(" ������ temp =", temp ) ;
  return 0;
}
