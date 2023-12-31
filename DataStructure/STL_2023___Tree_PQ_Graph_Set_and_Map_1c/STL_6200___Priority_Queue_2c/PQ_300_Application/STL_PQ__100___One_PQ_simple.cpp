//  �켱���� ť (Priority Queue). �ſ� ������ �ڷᱸ���̴�.

#include <bits/stdc++.h>
using namespace std;


int main() {
  int i, thedata[] = { 45, 31, 6, 27, 71, 30, 62, 99, 3, 134, 90, 32 };
  string code[]= {"�ϳ�", "��", "��", "��", "�ټ�", "����", "�ϰ�", "����", "��ȩ"} ;

  priority_queue<int, std::vector<int>, std::greater<int> > MQ(thedata, thedata+12) ;
  priority_queue<int, std::vector<int>, std::less<int> > WQ(thedata, thedata+12) ;


  while (!MQ.empty()) {
    cout << " ������ �̾Ƴ��� " << setw(4) << MQ.top() << endl;
    MQ.pop();
  } // end of while ( )

  cout << "\n ��� �̾Ƴ� ���� pq size =  " << MQ.size()   << endl;
  return 0;

} // end of main( )

