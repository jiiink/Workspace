
#include <iostream>
#include <vector>
#include <map>
using namespace std ;

#define allout(MSG,X)   cout<<"\n"<<MSG<<"\n";for(auto w:X)cout<< " " << w<<", "

int main() {

    array<int,6> v = {11, 12, 13, 14, 15, 16};
    int to[6] =  {71, 72, 73, 74, 75, 76} ;

    for (auto x : v) { x +=100 ; }
    allout("\n local auto�� ���� ��", v) ;

    for ( x : v) { x +=100 ; }   // ������ ��� ���� ���̾�...(auto x : &v )
    allout("\n �׳� ���� ��", v) ;

    for (auto &x : v) { x +=100 ; }   // ������ ��� ���� ���̾�...(auto x : &v )
    allout("\n ���������� reference�� �ѱ� �� ��", v) ;


} // end of main( )



