#include <bits/stdc++.h>
#define outlist(msg,lx)  cout<< "\n " << msg<<" : " ; for(auto w : lx ) cout<< " " << w ;
using namespace std;

int main() {


    list <int> la = { 20202, 10, 27, 11, 27, 44, 91, 876 };
    list <int> lb, lc ;


    outlist("la<>= ", la) ;
    outlist("lb<>= ", lb) ;
    outlist("lc<>= ", lc) ;
    // copy(la.begin(), la.end(), lb.begin()); // �̷��� �Ϲ� �ȵ˴ϵ���. List������
    // �� vector������ �Ǵµ� list������ �ȵɱ�� ?

    copy(la.begin(), la.end(), back_inserter(lb));
    outlist("After la<>= ", la) ;
    outlist("After lb<>= ", lb) ;

    copy_if( la.begin(), la.end(), back_inserter(lc), [](int i) {
        return i%2 ==0; // Ȧ���� �����ϼ���.
    });


    outlist("After copy_if( ) ����  lc<>= ", lc) ;



}
