// vector ������ �����ϰ� overloading���� �ϴ� ����� ������ô�.

#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;

template <typename T>
vector<T> operator+(vector<T>& a, vector<T>& b) {
    assert(a.size() == b.size());
    vector<T> result;
    result.reserve(a.size());

    auto ita = a.begin();
    auto itb = b.begin();
    for(; ita < a.end(); ita++, itb++)
        result.push_back( *ita + *itb ) ;

    return result ;
}


int main() {

    vector <int> va   { 1, 2, 4,  5} ;  // ������ �ٸ��� ������ �߻��Ѵ�.
    vector <int> vb   { 7, 8, 9, 10} ;
    vector <int> vc ;

    vector <string> vda   { "��", "��", "��"} ;
    vector <string> vdb   { "������", "�ʱ���", "�ٸ���" } ;
    vector <string> vdc ;

    vc  = va + vb ;
    vda = vda + vdb ;

    allout( "vc",  vc ) ;
    allout("vda", vda ) ;
    return 0;
}
