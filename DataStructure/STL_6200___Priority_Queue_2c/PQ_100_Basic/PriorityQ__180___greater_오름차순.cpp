//  �켱���� ť (Priority Queue). �ſ� ������ �ڷᱸ���̴�. �ݵ�� �����ξ�� �Ѵ�.
//  Default�� max heap �̴�.

#include <bits/stdc++.h>
using namespace std;


int main() {
  int i, thedata[] = { 145, 234, 112, 88, 56, 27, 571, 150, 62};

  priority_queue<int, vector<int>, greater<int> > X (thedata, thedata+8);


    while ( !X.empty() ) {
        cout << " " << X.top() ;
        X.pop();
    }


} // end of main( )

