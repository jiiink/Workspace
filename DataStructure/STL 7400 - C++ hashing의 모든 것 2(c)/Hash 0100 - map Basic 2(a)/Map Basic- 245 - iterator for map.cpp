#include <bits/stdc++.h>
using namespace std;
#include <random>

int main() {

    map<int, int> M;
    int rint, i, j ;


   for(int i = 0 ; i <100 ; i++){
        rint = rand();
        M[rint] = i*10;
   }

   for(auto w : M ){
    cout << "\n key " << w.first << " = " << w.second ;
   }

   auto mit = M.begin() ;
   cout << "\n �� 7���� ���Ҹ� ������� " << endl ;
   for(i=0 ; i <100 ; i+= 7 ){
    advance(mit,7);
    cout << "\n> " << mit->first << " = " <<  mit->second ;
   }
    return 0;
}
