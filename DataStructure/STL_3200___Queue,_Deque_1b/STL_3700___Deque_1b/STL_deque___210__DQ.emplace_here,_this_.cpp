#include <iostream>
#include <deque>
using namespace std;

// Ư�� ��ġ�� �ٷ� ���� ���� �� �ִ�. ȣȣȣ.....

int main () {

  deque<int> mydeque = {10,20,30};

  auto it = mydeque.emplace ( mydeque.begin()+1, 100 );
  mydeque.emplace ( it, 200 );
  mydeque.emplace ( mydeque.end(), 300 );

  cout << "mydeque contains:";
  for (auto& x: mydeque)
    cout << ' ' << x;
  cout << '\n';

  return 0;
}
