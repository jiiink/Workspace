#include <bits/stdc++.h>
#define outlist(msg,lx)  cout<< "\n " << msg<<" : " ; for(auto w : lx ) cout<< " " << w ;
using namespace std;

int main() {


    list <int> la = { 20202, 10, 27, 11, 27, 45, 91, 876 };
    list <int> lb, lc ;


    outlist("la<>= ", la) ;
    outlist("lb<>= ", lb) ;
    outlist("lc<>= ", lc) ;
    // copy(la.begin(), la.end(), lb.begin()); // �̷��� �Ϲ� �ȵ˴ϵ���. List������
    // �� vector������ �Ǵµ� list������ �ȵɱ�� ?

    copy(la.begin(), la.end(), back_inserter(lb));
    outlist("After la<>= ", la) ;
    outlist("After lb<>= ", lb) ;

    copy_n( la.begin(), 4, back_inserter(lc) );

    outlist("After lc<>= ", lc) ;



}
