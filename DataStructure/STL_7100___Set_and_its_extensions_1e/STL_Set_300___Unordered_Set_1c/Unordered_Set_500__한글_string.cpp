#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<" ";for(auto w:X)cout<<w<<", "

using namespace std ;

void dump_uset( string MSG, unordered_set<string> X){
  cout << "\n --  " << MSG << " -- \n" ;
  for ( unsigned i = 0; i < X.bucket_count(); ++i) {
    cout << "bucket [" << i << "] = ";
    for ( auto local_it = X.begin(i); local_it!= X.end(i); ++local_it )
      cout  << *local_it << " ,";
    cout << endl;
  }

}
// �ѱ��� ����ϱ� ���ؼ��� default encoding���� set�ؾ� �Ѵ�.

int main () {

  unordered_set<string> S ;

  S =  {"red","�޼�","blue", "X_mas", "345"} ;
  S.reserve(30) ;


  dump_uset( "�����̶���..", S ) ;
  return 0;
}
