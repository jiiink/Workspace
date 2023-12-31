//  �켱���� ť (Priority Queue). �ſ� ������ �ڷᱸ���̴�. �ݵ�� �����ξ�� �Ѵ�.
//  Default�� max heap �̴�.

#include <bits/stdc++.h>
using namespace std;

void printPQ(  string MSG, priority_queue<int, deque<int>, greater<int> > X ){
    cout << "\n " << MSG ;
    while ( !X.empty() ) {
        cout << " " << X.top() ;
        X.pop();
    }
} // end of printPQ()

int main() {
  int i, thedata[] = { 14, 24, 12, 88, 56, 27, 5, -40, 62};

  priority_queue< int, deque<int>, greater<int> > pq1 (thedata, thedata+8);

  printPQ( "1. pq1=", pq1 ) ;

  printPQ( "2. pq1=", pq1 ) ;

} // end of main( )

