#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG<<" ";for(auto w:X)std::cout<<w<<", "
using namespace std ;

int main() {
    forward_list< int > flist;


    for( int i = 0; i < 5; ++i ) {     // �߰��ϱ�
        flist.push_front( i*10 );
    }


    cout << "flist�� ù�� ° ��ġ ��: " << flist.front() << endl;

    allout("1. flist{}=", flist ) ;

    forward_list< int > flist2;

    flist2.assign( 7, -11);               // ���� ���� 11�� 3���� ����� �־��.

    allout("2. flist2{}=", flist2 ) ;


    forward_list< int > flist3;
    auto ihead = flist.begin() ;
    auto itail = flist.end() ;
    ihead++ ;
    flist3.assign( ihead, itail ); // Ư�� ����Ʈ�� �Ϻθ� �߶� �����ؼ� �ٸ� ������ �ű�

    allout("3. flist3{}=", flist3 ) ;

    return 0;
}




