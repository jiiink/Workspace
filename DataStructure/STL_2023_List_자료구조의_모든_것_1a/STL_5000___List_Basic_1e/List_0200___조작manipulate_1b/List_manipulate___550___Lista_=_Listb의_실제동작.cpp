#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG<<" ";for(auto w:X)std::cout<<w<<", "
using namespace std ;

// Python���� �ٸ���. Python�� pointer�� copy ��.

int main() {

    string my = "PNU-PigSoup!" ;
    list<char> la (my.begin(), my.end()) ;
    list<char> lb ;

    allout("Before la<>= ", la) ;
    allout("Before lb<>= ", lb) ;

    cout << "\nlb = la ; �۾��� �մϴ�. \n" ;
    lb = la ; // ���� �ɰ��� ���� ��ü�� �״�� copy �Ѵ�. �ð��� ��â �ɸ�.
    allout("After la<>= ", la) ;
    allout("After lb<>= ", lb) ;

    cout << "\n\nla.push_back('W') ���� ��Ȳ \n" ;
    la.push_back('W') ;
    allout("After la<>= ", la) ;
    allout("After lb<>= ", lb) ;

    return 0;
}




