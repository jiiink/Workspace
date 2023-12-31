// �켱���� ť (Priority Queue). �ſ� ������ �ڷᱸ���̴�. �ݵ�� �����ξ�� �Ѵ�.
// �ٸ� �̸��� Heap(��)�̶�� �Ѵ�.
// �켱���� ��  Max heap, �� � ������ subtree�� �ִ� ���Ҵ� root���� �۴�.
//
#include <iostream>
#include <queue>           // Defines both queue and priority_queue
#include <string>
using namespace std;

int main() {
  int i, thedata[] = {45, 34, 56, 27, 71, 50, 62};
  string code[]= {"one", "two", "three", "four", "five", "six", "seven" } ;

  cout << "�켱 ���� ť�� �����ݴϴ�. " << endl;

  priority_queue<int> pq;  // ǥ�� ����
  priority_queue<int, vector<int> , greater<int> > maxheap ;
  priority_queue<string, deque<string> , greater<string> > minstrheap ;
  cout << "\n The priority_queue size is now " << pq.size() << endl;

  cout << "\n Pushing 4 elements " << endl;
  for (i = 0; i < 4; ++i)  pq.push(thedata[i]);
  for (i = 0; i < 6; ++i)  minstrheap.push(code[i]);
  cout << "\n The priority_queue size is now " << pq.size() << endl;
  cout << "Popping 3 elements from Integer Heap " << endl;
  for (i = 0; i < 3; ++i) {
    cout << pq.top() << endl;
    pq.pop();
  }

  cout << "Popping 5 elements from String Heap " << endl;
  for (i = 0; i < 5; ++i) {
    cout << minstrheap.top() << endl;
    minstrheap.pop();
  }

  cout << "\n The priority_queue size is now " << pq.size() << endl;
  cout << "Pushing 3 elements " << endl;
  for(i = 4; i < 7; ++i)    pq.push(thedata[i]);

  cout << "\n The priority_queue size is now " << pq.size()  << endl;
  cout << "Popping all elements" << endl;

  while (!pq.empty()) {
    cout << pq.top() << endl;
    pq.pop();
  } // end of while ( )

  cout << "\n The priority_queue size is now " << pq.size()   << endl;

  return 0;

} // end of main( )

