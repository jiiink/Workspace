#include <bits/stdc++.h>
using namespace std;

int main() {

  int i, thedata[] = {45, 34, 56, 27, 71, 50, 62};

  queue <int, list<int> > q;  // Queue q�� ����� �� ������ list�� �Ѵ�.
  cout << "01. ť�� ���� ������() = " << q.size() << endl;

  cout << "02. 4���� �о� ����" << endl;
  for (i = 0; i < 4; ++i)  q.push(10*thedata[i]);
  cout << "03. ���� ������ ũ�� = " << q.size() << endl;
  // dump(" Q�� ���빰:", q ) ; // ���Ұ�

  for (i = 0; i < 3; ++i) {
    cout << q.front() << endl;
    q.pop();
  }
  cout << "04. ť�� ���� ������() " << q.size() << endl;
  cout << "05. 3���� ���Ҹ� �о� ���� " << endl;

  for(i = 4; i < 7; ++i)     q.push(thedata[i]);
  cout << "The queue size is now " << q.size() << endl;
  cout << "Popping all elements" << endl;

  while (!q.empty()) {
    cout << q.front() << endl;
    q.pop();
  }
  cout << "��� �̾� �� ���� ũ��()= " << q.size() << endl;
  return 0;
}
