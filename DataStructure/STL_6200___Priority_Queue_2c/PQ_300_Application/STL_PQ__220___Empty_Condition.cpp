#include <bits/stdc++.h>
using namespace std;

int main () {

  priority_queue<int> mypq ;
  int sum (0);

  for (int i=101;i<=121;i++) mypq.push( (i*i + 3)*i % 100 );

  while (!mypq.empty())   {  //  �ϳ��� ���� ���ֱ�. ��ΰ� �� �� ����
     cout << "\n top()=" << mypq.top() << " sum = " << sum ;
     sum += mypq.top();
     mypq.pop();
  }

  cout << "\n total: " << sum << '\n';

  return 0;
}


