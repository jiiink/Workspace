// Multi-set Demonstration (�� ���տ�  ���� ���Ұ� �� �� �ִ� ����)

#include <iostream>
#include <cassert>
#include <list>
#include <cstring>
#include <set>
#define allout(MSG,X)   cout<<"\n"<<MSG<<"=> ";for(auto w:X)cout<<w<<", "

using namespace std;
template <typename Container>
Container make(const char s[]) {
  return Container(&s[0], &s[strlen(s)]);
}

int main() {
  cout << "��Ƽ �V�� ����� ���ô�. "
       << "���� �߰��ϱ� " << endl;
  list<char> list1 =
      make< list<char> >("Crazy Professor Zoh in PNU.");


  multiset<char> mulset;
  set     <char> maset ;  // �׳� ��- ����
  list<char>::iterator i;

  for (i = list1.begin(); i != list1.end(); ++i) {
        mulset.insert(*i);  // ���ڸ� �ϳ��� �ֽ��ϴ�. �ߺ����
        maset.insert(*i);  // ���ڸ� �ϳ��� �ֽ��ϴ�. �ߺ�����
  }


  cout << "\n\n maset1�� ����: " << "size= " << maset.size() ;
  for(char w : maset) {
    cout << " " << w ;
  }


  cout << "\n\n multiset1�� ����: " << "size= " << mulset.size() ;
  for(char w : mulset) {
    cout << " " << w ;
  }

  return 0;

} // end of main()
