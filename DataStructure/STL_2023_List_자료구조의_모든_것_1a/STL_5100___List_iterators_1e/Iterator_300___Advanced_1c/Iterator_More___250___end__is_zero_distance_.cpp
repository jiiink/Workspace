#include <bits/stdc++.h>
#define Outlist(msg,lx)  cout<< "\n--" << msg<<": " ; for(auto w : lx ) cout<< " " << w ;
using namespace std;

int main () {

  list< int  > ilist   = { 21, 22, 23, 24, 25, 26, 27, 28, 29, 30 };
  list< int  >::iterator ita, itb, itc, itd ;

  int gap ;

  ita = ilist.begin() ;
  itc = ilist.end() ;
  itd = --itc ;
  ++ita ; ++ita ; ++ita ;

  itb = ita ;

  cout << "\n *ita= " << *ita ;
  cout << "\n *itc= " << *itc ;
  cout << "\n *itd= " << *itd ;
  cout << "\n distance(itc, ita)= " << distance(itc, ita) ;
  cout << "\n distance(itd, ita)= " << distance(itd, ita) ;
  return 0;

  // list end()������ ���Ұ� ���� ������ distance ��꿡���� �Ÿ��� 0�� �ȴ�.
}
