#include <bits/stdc++.h>
#include <functional>
using namespace std;


int main(int argc, char** argv) {
   vector<int> v = {1, 2, 3, 4, 5};

   cout << "���� ������� �ʴ� ���" <<endl;
   for (auto it = v.begin(); it != v.end(); it++) {
       cout << *it <<endl;
   }

   cout << "���� ����ϴ� ���" <<endl;
   for_each(v.begin(), v.end(), [](int val)  // [] ���� �Լ��� �������� �˸��� �κ�
       { cout << val <<endl;      }               //  { }�ȿ� �� ���� �Լ��� ��ü���� ��ü
   );

    return 0;
}




