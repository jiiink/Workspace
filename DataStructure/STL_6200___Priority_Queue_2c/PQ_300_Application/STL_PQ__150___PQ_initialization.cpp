//  �켱���� ť (Priority Queue). �ſ� ������ �ڷᱸ���̴�.

#include <bits/stdc++.h>
using namespace std;


int main() {
  int i, thedata[] = { 45, 31, 6, 27, 71, 30, 62, 99, 3, 134, 90, 32 };
  string code[]= {"�ϳ�", "��", "��", "��", "�ټ�", "����", "�ϰ�", "����", "��ȩ"} ;

  priority_queue<int, vector<int>, greater<int> > MQ(thedata, thedata+12) ;
  priority_queue<string, vector<string>, less<string> > WQ(code, code+9) ;


  while (!MQ.empty()) {
    cout << " ���ڸ� MQ���� �̾Ƴ��� " << MQ.top() << endl;
    MQ.pop();
  } // end of while ( )


  cout << "\n\n" ;
  while (!WQ.empty()) {
    cout << " ���ڸ� WQ���� �̾Ƴ��� " << WQ.top() << endl;
    WQ.pop();
  } // end of while ( )

  cout << "\n ��� �̾Ƴ� ���� pq size =  " << MQ.size()   << endl;
  return 0;

} // end of main( )

