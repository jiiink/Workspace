
#include <bits/stdc++.h>
using namespace std;

int main () {
  stack<string> mystack;
  string stemp = "�丶�� �ֽ�" ;

  mystack.emplace ("������");
  mystack.emplace ("���� ��");   // �����͸� �� ��ü�� push( )
  mystack.emplace ("ź���");
  mystack.emplace ("����");
  mystack.push( stemp ) ;     // �����͸� �׸�(����) ��Ƽ� push( )

  cout << "mystack contains:\n\n";

  int i = 0 ;
  while (!mystack.empty()) {
    cout << ++i << ".  " << mystack.top() << '\n';
    mystack.pop();
  }

  return 0;
}
