#include <bits/stdc++.h>
using namespace std;

int main () {

  vector <int>  ivec ;
  vector <int> *pvec ;        // pointer to vector<int>
  vector < vector<int> * > vecvec ;

     for(int i=1; i < 10; i++) {
        if (i%2 == 0 ){
            cout << "�� vector��  �ϳ� �� ����� ���ô�. " << endl ;
            pvec = new  vector<int> ;
            pvec->push_back( 100* i) ;  // ���ο� ���ʹ� reference�̹Ƿ� pointer�� ó���ؾ� ��. ->
            vecvec.push_back( pvec ) ;
            cout << "vector size= " << vecvec.size( ) << endl ;
        }
     }

  return 0;
}

