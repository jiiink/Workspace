#include <bits/stdc++.h>
#define mout(msg,lx)  cout<< "\n " << msg<<": " ; for(auto _w : lx ) cout<< " " << _w ;
using namespace std;

struct Nodex {
    string name ;
    list <Nodex>::iterator rtree   ;  // ������ subtree�� ����Ŵ.
    list <Nodex>::iterator ltree   ;  // ���� subtree�� ����Ŵ.
} nx, ny ;

int main(){

    list <Nodex> Bitree ; // ��� ��尡 vector�� ��.
    list <Nodex>::iterator tit ;

    nx.name="banana" ;

    Bitree.push_back( nx ) ;

    ny = Nodex();

    ny.name="Tomato" ;

    Bitree.push_back( ny) ;
    tit =  Bitree.end() ;
    tit-- ;
    nx.rtree = tit ;


}  // end of main( )


