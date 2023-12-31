// �ݺ���. ���� �߿��� �����̴�. STL �ڷᱸ���� �����ϴ� ������ ���
// ���� �������� �� ���۰� �� ��ġ, ������ ����ϰ� ���� �ʿ䰡 ����.
// myX.begin(), myX.end()
#define allout(MSG,X)   cout<<"\n"<<MSG<<" ";for(auto w:X)cout<<w<<","
#include <bits/stdc++.h>
using namespace std;


int main() {
    vector <int> myvec { 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    vector <int>::iterator    it1, it2, it3 ;

    it1 = myvec.begin()+1 ;
    it2 = myvec.begin()+3 ;
    it3 = myvec.end()  -2 ;
    allout( "\n  ���� �� myvec[]= ", myvec) ;
    cout << "\n  ���� �� *it1= " << *it1 ;
    cout << "\n  ���� �� *it2= " << *it2 ;
    cout << "\n  ���� �� *it3= " << *it3 ;
    myvec.erase(it1, it2) ;

    allout( "\n  ���� �� myvec[]= ", myvec) ;
    cout << "\n  myvec.erase(it1, it2) ���� �� *it1= " << *it1 ;
    cout << "\n  myvec.erase(it1, it2) ���� �� *it2= " << *it2 ;
    cout << "\n  myvec.erase(it1, it2) ���� �� *it3= " << *it3 ;

    myvec.insert(it2, 999) ;
    allout( "\n  ���� �� myvec[]= ", myvec) ;
    cout << "\n  myvec.insert(it2, 999) ; ���� �� *it1= " << *it1 ;
    cout << "\n  myvec.insert(it2, 999) ; ���� �� *it2= " << *it2 ;
    cout << "\n  myvec.insert(it2, 999) ; ���� �� *it3= " << *it3 ;

} // end of main( )
