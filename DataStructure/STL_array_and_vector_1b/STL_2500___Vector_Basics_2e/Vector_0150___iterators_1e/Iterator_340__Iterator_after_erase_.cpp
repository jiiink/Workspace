// �ݺ���. ���� �߿��� �����̴�. STL �ڷᱸ���� �����ϴ� ������ ���
// ���� �������� �� ���۰� �� ��ġ, ������ ����ϰ� ���� �ʿ䰡 ����.
// myX.begin(), myX.end()
#define allout(MSG,X)   cout<<"\n"<<MSG<<" ";for(auto w:X)cout<<w<<","
#include <bits/stdc++.h>
using namespace std;


int main() {
    vector <int> myvec { 10, 11, 12, 13, 14, 15, 16};      // list container for character elements
    vector <int>::iterator    it1, it2, it3 ;

    it1 = myvec.begin() ;
    it2 = myvec.begin()+3 ;
    allout( "\n  ���� �� myvec[]= ", myvec) ;
    cout << "\n ������ *it1= " << *it1 ;
    cout << "\n ������ *it2= " << *it2 ;
    cout << "\n myvec.back()= " <<  myvec.back() ;

    myvec.erase(it1) ;
    allout( "\n  ���� �� myvec[]= ", myvec) ;
    cout << "\n  myvec.erase(it1) ���� �� *it1= " << *it1 ;
    cout << "\n  myvec.erase(it1) ���� �� *it2= " << *it2 ;
    cout << "\n myvec.back()= " <<  myvec.back() ;

} // end of main( )
