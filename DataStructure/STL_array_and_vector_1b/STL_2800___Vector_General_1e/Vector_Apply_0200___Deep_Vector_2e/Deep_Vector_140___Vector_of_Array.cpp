
#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<": ";for(auto w:X)cout<<w<<", "
using namespace std;


typedef pair<int,int>  Date;
typedef vector< Date > Student ;

int main() {

  Date x,y;
  Student  dsall ;
  array< Student,100 >  cbook ;    // 100���� �л��� ��±��

  x = make_pair(9, 11) ;  // 9�� 11�� �Ἦ
  dsall.push_back(x) ;
  x = make_pair(9, 28) ;   // 9�� 28�� �Ἦ
  dsall.push_back(x) ;

  cout << "\n Size of cbook= " << sizeof(cbook) ;

  cbook[1] = dsall ;      // 1�� �л��� ��� ���
  cout << "\n Size of cbook= " << sizeof(cbook) ;


} // end of main()
