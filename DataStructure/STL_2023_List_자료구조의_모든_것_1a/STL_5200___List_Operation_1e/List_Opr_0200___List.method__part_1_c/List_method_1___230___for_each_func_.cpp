#include <bits/stdc++.h>
using namespace std;
#define mout(msg,C) cout<<"\n"<<msg<<": ";for(auto w:C) cout << " "<<w;


void print_list(string s) {
  cout << "print_list( ) : " << s << "-" << endl;
}

void add_cross(string s) {
   s = s + "_X" ;
}

int main() {

  cout << "���� for_each �Լ��� ����Ͽ� ����Ʈ ó���ϱ�." << endl;
  list<string> dlist;

  dlist.push_back( "������");
  dlist.push_back(  "������");
  dlist.push_back(  "�۾���");
  dlist.insert(dlist.begin(), "��ѱ�");
  dlist.insert(dlist.begin(), "�δ���");

  // Print out each list element:
  for_each(dlist.begin(), dlist.end(), print_list);

  for_each(dlist.begin(), dlist.end(), add_cross );
  mout("add_cross( ) ���� ", dlist ) ;

  return 0;
}
