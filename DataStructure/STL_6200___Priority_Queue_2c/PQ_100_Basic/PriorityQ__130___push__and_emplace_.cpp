#include <bits/stdc++.h>
using namespace std;

int main () {

  priority_queue <string, deque<string>, greater<string> > mypq;
  string mystr ;
  mypq.emplace("orange"    );   // �߰� ������ ������ �ʰ� �ٷ� ���� �� �ִ�.
  mypq.emplace("strawberry");
  mypq.emplace("apple"     );
  mypq.emplace("pear"      );
  mystr = "ġŲ" ;
  mypq.push   ( mystr      );
  mypq.emplace("����"      );

  std::cout << "\n �ϳ��� �� �� ���ô�.\n ";
  while (!mypq.empty())   {
     cout << "\n poped[] =  " << mypq.top();
     mypq.pop();
  }
  cout << '\n';

  return 0;
}

