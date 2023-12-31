
#include <bits/stdc++.h>
#define allout(msg,lx)  cout<<"\n"<<msg<<" : ";for(auto &w : lx ) cout<< " " << w ;
using namespace std;

// �˻� �Լ�, predicate
bool   single_digit (const int& value) {
    return (value<10);
} // end of single)digit()

// �˻� �Լ�, predicate
struct is_odd {
    bool operator() (const int& value) {
        return (value%2)== 1;
    }
}; // end of struct is_odd

int main () {

  list<int> mylist {15, 36, 7, 17, 20, 3, 9, 36,1};

  allout("�ܰ� 0. ", mylist ) ;
  mylist.remove ( 36 );
  allout("�ܰ� 1. ", mylist ) ;
  mylist.remove_if (single_digit);
  /* �ٺ����� �ϸ�
    for(i   )
        if *it < 10
  */
  allout("�ܰ� 2. ", mylist ) ;

  mylist.remove_if (is_odd());
  allout("�ܰ� 3. ", mylist ) ;

  return 0;
}
