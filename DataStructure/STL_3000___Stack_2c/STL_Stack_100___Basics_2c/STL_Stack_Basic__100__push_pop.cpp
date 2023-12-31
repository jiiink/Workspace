// ���������� error  ����� ����
//  a. �� empty stack���� pop( ) �غ���
//  b. empty stack�� ������ ���� ������ ä�� �־��
//  c.  TYPE A�� stack�� �ٸ� TYPE�� �־��
//  d.  stack�� �߰��� ������ �־� ����
//  e. vector���� ����� �� �ִ� find( ), sort( )�� ������ ����غ���

#define allout(MSG,X)   cout<<"\n"<<MSG<<"=> ";for(auto w:X)cout<<w<<", "

#include <bits/stdc++.h>
using namespace std;

int main() {
  cout << "���� ����� Ȱ���ϱ�, ���� �ѹ� �غ���. " << endl;

  stack<int> s, summer ;



  cout << "The stack size is now " << s.size() << endl;
  cout << "Pushing 4 elements " << endl;
  for (auto w : {12, 23, 34, 45, 67, 78, 89} )
       s.push( w );

  // allout("s[] = ", s ) ;


  cout << "The stack size is now " << s.size() << endl;
  cout << "Popping 3 elements " << endl;
  for (int i = 0; i < 3; ++i) {
    cout << "\n s.top() = " << s.top() << endl;
    cout << "\n s.size()= " << s.size() ;
    s.pop();
  }

  while (!s.empty()) {
    cout << s.top() << endl;
    s.pop();  // void()
  } // end of while( )


  return 0;
}
