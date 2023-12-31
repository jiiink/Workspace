#include <bits/stdc++.h>
#define mout(msg,lx)  cout<< "\n--" << msg<<": " ; for(auto _w : lx ) cout<< " " << _w ;
using namespace std;

struct Nodex {
    char letter ;
    list<Nodex>::iterator jump   ;
} nx, ny ;

int main(){

    string name="abcdefghijklmnopqrstuvwxyz" ;
    list<Nodex> ml ;
    char xc ;

    vector<char> vn(name.begin(), name.end()) ;
    mout("�ʱ�:", vn) ;

    for(auto it = vn.begin(); it != vn.end() ; ++it){
        nx.letter = *it ;
        nx.jump  = ml.end() ;
        ml.push_back( nx ) ;
    }

    // jump iterator(pointer)�� setting �մϴ�.
    auto jit = ml.begin()  ;
    advance(jit, 7) ; // ������ 7ĭ�� ���� ��
    cout << "\n jit�� �ʱⰪ : " << (*jit).letter ;

    for(auto it= ml.begin(); it!= ml.end(); ++it) {
        (*it).jump = jit ;
        ++jit ;
        if (jit == ml.end()) { jit = ml.begin() ; }
    }

    auto bit = ml.begin() ;
    for(auto it= ml.begin(); it!= ml.end(); ++it) {
       cout << "\n (*it).letter =" << (*it).letter ;
       bit = (*it).jump ;
       cout << "  (*bit).letter =" << (*bit).letter ;
    }


    int count = 0 ;
    auto it = ml.begin();
    it = (*it).jump ;
    cout << "\n\n Jump ���� ��ġ�� letter= " << (*it).letter ;


    while( ++count < 30 ) {
        cout << "\n from " << (*it).letter ;
        it = (*it).jump  ;
        cout << " to " << (*it).letter ;
    }
    return 0;
}
