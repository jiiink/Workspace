
#include <bits/stdc++.h>
#define Outlist(msg,lx)  cout<< "\n--" << msg<<": " ; for(auto w : lx ) cout<< " " << w ;
using namespace std;


int main() {

     list <string> ml = {"�ٶ���",   "�ʱ���", "���Ҹ�", "������", "�˰�" } ;
     list <string>::iterator it ;


	 cout << "\n ml.size()= " << ml.size() ;


	 it = ml.begin() ;
	 int count=1 ;
	 while( it != ml.end() ) {
        cout << "\n " << count++ << "= " << *(it) ;
        it++ ; // ���� ���� , �� it = it + 1 �� ���� �ȵȴ�. �̰��� ������ jump
	 } // end of while()



  cout << "\n �Ųٷ� �����ϱ� backwards:\n";
  for ( auto rit=ml.rbegin(); rit!=ml.rend(); ++rit)
     cout << "\n " << distance(ml.rend(),rit) << "= " << *rit;


  return 0;
}






