#include<bits/stdc++.h>
#define allout(msg,X) cout<<"\n\n"<<msg<<"\n";for(auto w:X) cout << w << " "
using namespace std;
int main(){
    vector<int> v {23, 43, 11, 66, 76, 34};

    allout("���� vector v[]: ", v ) ;
    v.pop_back( ) ;
    allout("pop_back( ) ���� vector v[]: ", v ) ;

    return 0;
}

