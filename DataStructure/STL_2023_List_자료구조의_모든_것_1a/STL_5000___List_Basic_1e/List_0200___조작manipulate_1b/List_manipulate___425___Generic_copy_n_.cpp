#include <bits/stdc++.h>
#define outlist(msg,lx)  cout<< "\n " << msg<<" : " ; for(auto w : lx ) cout<< " " << w ;
using namespace std;

int main() {


    list <int> la = { 20202, 10, 27, 11, 27, 45, 91, 876 };
    list <int> lb, lc ;


    outlist("la<>= ", la) ;
    outlist("lb<>= ", lb) ;
    outlist("lc<>= ", lc) ;
    // copy(la.begin(), la.end(), lb.begin()); // 이렇게 하믄 안됩니데이. List에서는
    // 왜 vector에서는 되는데 list에서는 안될까요 ?
    copy(la.begin(), la.end(), back_inserter(lb));
    outlist("After la<>= ", la) ;
    outlist("After lb<>= ", lb) ;

    copy_n( la.begin(), 4, back_inserter(lc) );

    outlist("After lc<>= ", lc) ;



}
