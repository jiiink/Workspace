// �ݺ���. ���� �߿��� �����̴�. STL �ڷᱸ���� �����ϴ� ������ ���
// ���� �������� �� ���۰� �� ��ġ, ������ ����ϰ� ���� �ʿ䰡 ����.
// myX.begin(), myX.end()

#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<"\n";for(auto w:X)cout<<w<<", "
using namespace std;


int main() {
    vector <int> myvec { 10, 11, 12, 13, 14, 15, 16};      // list container for character elements
    vector <int>::iterator    it1, it2, it3 ;

    it1 = myvec.begin()+2 ;
    cout << "\n *it1= " << *it1 ;
    cout << "\n myvec.back()= " <<  myvec.back() ;

    myvec.insert( myvec.begin(), -99) ;
    cout << "\n ������ *it1= " << *it1 ;
    it2 = myvec.begin()+2 ;
    allout(" myvec[] ��Ȳ = ", myvec ) ;

    cout << "\n push_back(455) ����  *it2= " << *it2 ;
    myvec.push_back( 455) ;

    allout(" myvec[] ��Ȳ = ", myvec ) ;
    cout << "\n push_back(455) ����  *it2= " << *it2 ;

    cout << "\n myvec.back()= " <<  myvec.back() ;

    cout << "\n\n List�� ��� iterator�� Ư�� \n\n" ;
    list <int> mylist = { 31, 32, 33, 34, 35 };
    list <int>::iterator itlst ;

    itlst = mylist.begin() ;
    itlst++ ; itlst++ ;
    cout << "\n *itlst�� �� =" << *itlst ;
    mylist.insert( mylist.begin(), -10) ;
    mylist.insert( mylist.begin(), -20) ;
    allout(" mylist[]�� ����", mylist ) ;
    cout << "\n insert( )���� *itlst�� �� =" << *itlst ;


} // end of main( )
