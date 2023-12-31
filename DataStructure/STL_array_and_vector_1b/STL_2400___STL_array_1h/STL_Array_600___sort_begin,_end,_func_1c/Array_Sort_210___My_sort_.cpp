#include <bits/stdc++.h>
#include <algorithm>
using namespace std ;

void showit(  array< array<int, 5>, 6> Q ){
    int i,j,k ;
    i = j = 0 ;
    for( auto U : Q ){
        for( auto v : U ) {
            printf(" %3d", v) ;
            j++ ;
        }
        cout << "\n";
        i++; j=0 ;
    }
} // end of showit( )

#define KJ 2  // ������ 2-index
bool myorder ( array<int,5> left,  array<int,5> right) {
       return (  left[KJ]< right[KJ] ) ;
}

// ��ü ���� �������� ���� ��.
bool sumorder ( array<int,5> left,  array<int,5> right) {
    int lsum, rsum ;
    lsum = accumulate(  left.begin(),  left.end(), 0) ;
    rsum = accumulate( right.begin(), right.end(), 0) ;

    return ( lsum  < rsum ) ;
}

int main () {
    array<int,5> a = { 5, 20, 36, 17, 50};
    array<int,5> b = {10, 20, 23, 40, 51};
    array<int,5> c = {50, 40,  7, 20, 10};
    array<int,5> d = {10, 20, 31, 12, 20};
    array<int,5> e = {50,  4, 12,  0, 10};
    array<int,5> f = { 5, 10, 30, 30, 53};

    array< array<int, 5>, 6 > Urray  { a, b, c, d, e, f };

    // Urray�� ���� ����(myorder)���� �����غ���.
    cout << "\n STL���� ���� �⺻ ����, k=0��°�� ��������:\n" ;
    sort( Urray.begin(), Urray.end() );
    showit( Urray );

    cout << "\n ���� ���� ����, k=2��°�� �������� :\n" ;
    sort( Urray.begin(), Urray.end() , myorder );
    showit( Urray );

    cout << "\n sum( ) �������� :\n" ;
    sort( Urray.begin(), Urray.end() , sumorder );
    showit( Urray );
    return 0;
}
