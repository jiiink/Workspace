#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;


int main() {

    vector< list<string> > listvec    { {"������"}, { "ݣ", "��"}, {},  {"??", "��?", "Щ?" } } ;

    for(auto A: listvec) {
        cout << "\n Element list: " ;
        for(auto w : A ){
            cout << w << ", " ;
        }
    }
} // end of main()
