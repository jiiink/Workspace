#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;


int main() {

    array< vector<string>, 3 > vecarray  {  { { "��", "��"}, {"��", "��", "�밡��" }, {"�޷�"} } } ;

    for(auto A: vecarray) {
        cout << "\n row vector: " ;
        for( auto w : A ){
            cout << w << ", " ;
        }
    }
} // end of main()
