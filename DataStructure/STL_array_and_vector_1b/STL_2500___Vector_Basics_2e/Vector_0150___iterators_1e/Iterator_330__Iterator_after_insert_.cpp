// �ݺ���. ���� �߿��� �����̴�. STL �ڷᱸ���� �����ϴ� ������ ���
// ���� �������� �� ���۰� �� ��ġ, ������ ����ϰ� ���� �ʿ䰡 ����.
// myX.begin(), myX.end()
#define allout(MSG,X)   cout<<"\n"<<MSG<<"\n ";for(auto w:X)cout<<w<<","
#include <bits/stdc++.h>
using namespace std;


int main() {
    vector <int> myvec { 10, 11, 12, 13, 14, 15, 16};      // list container for character elements
    vector <int>::iterator    it1, it2, it3 ;

    it1 = myvec.begin()+2 ;
    cout << "\n ������ *it1= " << *it1 ;
    cout << "\n myvec.back()= " <<  myvec.back() ;

    myvec.push_back(-99) ;
    // myvec.insert( myvec.begin(), -99) ;
    allout( "\n myvec[]= ", myvec) ;
    cout << "\n ������ *it1= " << *it1 ;

    cout << "\n myvec.back()= " <<  myvec.back() ;

} // end of main( )
