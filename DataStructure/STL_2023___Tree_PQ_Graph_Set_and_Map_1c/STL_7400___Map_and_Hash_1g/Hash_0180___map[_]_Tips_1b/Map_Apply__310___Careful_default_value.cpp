#include <stdio.h>
#include <bits/stdc++.h>
#include <map>
using namespace std;

int main() {
    map <int,int> m ;

    cout << " int map default ���� 0 �̴�.\n " ;
    for( int i = 0 ; i < 10 ; i++ ) m[i]++ ;

    for( const pair<int,int>& p : m )
        printf( "m[%d] => %d\n", p.first, p.second ) ;


    cout << " ���ڿ��� default ���� Blank char 1 �����̴�.\n " ;
    map <int, string> ms ;
    for( int i = 0 ; i < 10 ; i++ ) ms[i]= ms[i-1] + "*" ;

    for( const pair<int,string>& p : ms )
        printf( "m[%d] => %s\n", p.first, p.second.c_str() ) ;

} // end of main( )
