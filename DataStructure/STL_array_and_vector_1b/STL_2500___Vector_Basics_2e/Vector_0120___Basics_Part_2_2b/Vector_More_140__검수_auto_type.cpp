// c++11�� ���� ��ɿ��� auto type�� �ִ�.
// auto�� ������ �� Ư�� type�� �־��ָ� �׳� �� type���� ���� ��������.
// �ݵ�� �ʱ�ȭ�� �� ������ �ؾ� �ٷ� compile time�� �� ���� �����ȴ�.

#include <bits/stdc++.h>
using namespace std;
#define  myout(msg,x)  cout<< "\n" << msg << ":"; for(auto s : x) cout << " " << s ;


int main() {

    vector <int> myvector { 11, 22, 33, 44, 55, 66 };      // list container for character elements
    auto it     = myvector.begin() ; ;
    auto yourvector = myvector ;


    cout << "Oh it works! " << *(it+3) << endl ;
    myout(" 1. myvector[]: ", myvector ) ;

    yourvector.push_back( -10) ;
    yourvector.push_back( 3 ) ;

    it = yourvector.end()-1 ;
    cout << "\n 2. yourvector�� �� ���� = " << *(yourvector.end()-1) << endl ;
    cout << "\n 3. yourvector.end( ) ���� = " << *yourvector.end() << endl ;
    myout(" 3. yourvector[]: ", yourvector ) ;

} // end of main( )
