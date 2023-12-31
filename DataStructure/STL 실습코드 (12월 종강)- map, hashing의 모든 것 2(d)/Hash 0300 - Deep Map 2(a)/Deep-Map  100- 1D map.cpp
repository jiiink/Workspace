// �ϳ��� map�� �������� attribut�� ���� �� �ִ� multi_map�� ��� ��
// map�� CodeBlock���� ����Ϸ��� �ݵ�� Comipler���� C+11 �� check�ؾ� �մϴ�.
// Have g++ follow the C++11 ISO C++ language standard

#include <bits/stdc++.h>
using namespace std;

int main() {

  multimap<string, int> m;

  m.insert( pair<string, int>("a", 1));
  m.insert( pair<string, int>("c", 2));
  m.insert( pair<string, int>("b", 3));
  m.insert( pair<string, int>("b", 4));
  m.insert( pair<string, int>("a", 5));
  m.insert( pair<string, int>("b", 6));

  cout << "Number of elements with key a: " << m.count("a") << endl;
  cout << "Number of elements with key b: " << m.count("b") << endl;
  cout << "Number of elements with key c: " << m.count("c") << endl;

  cout << "Elements in m: " << endl;
  for ( auto it = m.begin(); it != m.end(); ++it) {
       cout << "  [" << (*it).first << ", " << (*it).second << "]" << endl;
   }

   pair< multimap<string, int>::iterator, multimap<string, int>::iterator> ppp;


   ppp = m.equal_range("b");    // equal_range(b)�� b�� key�� ������ ������ ������ �����Ѵ�.

   // Loop through range of maps of key "b"
   cout << endl << "Range of equal_range(b) ���� : " << endl;

   multimap<string, int>::iterator it2 ;
   for ( it2 = ppp.first; it2 != ppp.second; ++it2)    {
       cout << "  [" << (*it2).first << ", " << (*it2).second << "]" << endl;
   }

//   ������ �����ұ�� ?
//   cout << ppp.first  << endl;
//   cout << ppp.second << endl;

   m.clear(); // �̰��� �ؾ߸� memory�� release�˴ϴ�. �ȱ׷��� memory �� ��.
}

