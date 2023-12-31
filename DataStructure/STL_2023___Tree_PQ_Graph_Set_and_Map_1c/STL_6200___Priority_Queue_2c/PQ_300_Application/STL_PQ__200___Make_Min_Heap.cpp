//  �켱���� ť (Priority Queue). �ſ� ������ �ڷᱸ���̴�. �ݵ�� �����ξ�� �Ѵ�.
//  �ٸ� �̸��� Heap(�Q)�̶�� �Ѵ�. �켱���� �Q  Max heap
//  �������� ���⿡�� min-heap�̳� max-heap�� ���������� ������ �� �־�� �մϴ�.

#include <bits/stdc++.h>
using namespace std;


int main() {
  int i, thedata[] = {45, 34, 56, 27, 71, 50, 62, 99, 3, 134, 510, 32 };
  string code[]= {"�ϳ�", "��", "��", "��", "�ټ�", "����", "�ϰ�", "����", "��ȩ"} ;

  cout << "�켱 ���� ť�� �����ݴϴ�. " << endl;

  priority_queue<int> pq;  // less<int>�� ǥ����  ������ ���
  priority_queue<int,      vector<int> , less<int> > maxheap ;
  //             ����   �������         �񱳹��          �̸�
  priority_queue<string, deque<string> , greater<string> > minstringheap ;
  //             ����     �������        �񱳹��         �̸�

  cout << "\n The priority_queue PQ size is now " << pq.size() << endl;

  cout << "\n Pushing 4 elements " << endl;
  for (i = 0; i < 8; ++i)  pq.push(thedata[i]);

  for (i = 0; i < 6; ++i)  minstringheap.push(code[i]);
  cout << "\n �� ���� ä�� ����  priority_queue size is now " << pq.size() << endl;
  cout << "Popping 3 elements from Integer Heap " << endl;
  for (i = 1; i <= 2; ++i) {
    cout << " Minheap���� �̾Ƴ� ���Ҵ� = " << pq.top() << endl;
    pq.pop();
  }

  cout << "\n Popping 5 elements from String Heap " << endl;
  for (i = 0; i < 5; ++i) {
    cout << " String Minheap���� �̾Ƴ� ���Ҵ� = " << minstringheap.top() << endl;
    minstringheap.pop();
  }


  cout << "\n The priority_queue size is now " << pq.size()  << endl;
  cout << "\n Popping all elements" << endl;

  while (!pq.empty()) {
    cout << " ������ �̾Ƴ��� " << pq.top() << endl;
    pq.pop();
  } // end of while ( )

  cout << "\n ��� �̾Ƴ� ���� pq size =  " << pq.size()   << endl;
  return 0;

} // end of main( )

