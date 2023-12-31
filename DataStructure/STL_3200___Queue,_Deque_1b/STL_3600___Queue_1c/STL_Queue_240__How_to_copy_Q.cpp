// queue::emplace
#include <iostream>       // cin, cout
#include <queue>          // queue
#include <string>         // string, getline(string)
using namespace std ;

void Pqueue( string msg, queue<string> X ){
    cout << "\n Queue " << msg << ": ";
    while( !X.empty()) {
        cout << X.front() <<   ", "   ;
        X.pop() ;
    }

}

int main () {

  queue<string> foo,bar ;
  foo.push ("Com" ); foo.push("YouTube" ); foo.push("Box" );
  foo.push ("Dali"); foo.push("TehmTube"); foo.push("Beer");

  Pqueue("Copy �� foo[]=", foo ) ;
  Pqueue("Copy �� bar[]=", bar ) ;


  bar = foo ;
  Pqueue("Copy �� foo[]=", foo ) ;
  bar.push("Monkey") ;
  Pqueue("Copy �� bar[]=", bar ) ;
  return 0;
}
