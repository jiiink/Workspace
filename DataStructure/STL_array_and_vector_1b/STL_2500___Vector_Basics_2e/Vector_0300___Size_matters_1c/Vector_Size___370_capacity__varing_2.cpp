/*

v.capapcity( ) ; ���� vector�� ���� �� �ִ� ������ ����.
v.size( ) ; ���� ������ ����

���� ���� �޸� �ʱ⿡ 10���� ���Ҹ� �̸� �־�д�.

*/

#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
#include <bits/stdc++.h>
using namespace std;


int main() {

    vector<int> iv {0, 1, 2, 3, 4, 5, 6, 7, 8, 9 } ;

    cout << "\n �ϳ��� �߰��� �� Ȯ���Ǵ´� capacity�� ũ��() " ;
    for (unsigned int loop = 0; loop != 80; ++loop) {
        iv.push_back( loop*loop );
        cout << "\n (size, capa)= " << setw(3) << iv.size() << ", " << setw(3) << iv.capacity() ;
    }

    //������ ���� Ȯ���� ������ �״�� �д�.
    cout << "\n\n �ϳ��� ������ �� �پ��� capacity�� ũ��() " ;
    for (unsigned int loop = 0; loop != 85; ++loop) {
        iv.pop_back( );
        cout << "\n (size, capa)= " << setw(3) << iv.size() << ", " << setw(3) << iv.capacity() ;
    }

    //������ ���̷��� �Ѵٸ� shrink_to_fit( )

    iv.shrink_to_fit();
    cout << "\n iv[]�� ũ�� ������ ��:\n" ;
    cout << "\n (size, capa)= " << setw(3) << iv.size() << ", " << setw(3) << iv.capacity() ;

    return 0;

} // end of main( )
