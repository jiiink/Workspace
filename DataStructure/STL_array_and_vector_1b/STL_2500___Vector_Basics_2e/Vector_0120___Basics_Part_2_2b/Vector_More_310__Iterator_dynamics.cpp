// �ݺ���. �����̳� ������ ���� iterator�� ���� �������� �ʴ´�.
// �����Ǵ� ���� ����� iterator begin(), end(), front( ), back()
// 2021�� 10�� 1��, CHO

#include <bits/stdc++.h>
using namespace std;


int main() {
    vector <int> myvec { 10, 11, 12, 13, 14, 15, 16};      // list container for character elements
    vector <int>::iterator    it1, it2, it3 ;

    it1 = myvec.begin()+2 ;
    cout << "\n *it1= " << *it1 ;
    cout << "\n myvec.back()= " <<  myvec.back() ;

    myvec.insert( myvec.begin(), -99) ;
    cout << "\n ������ *it1= " << *it1 ;

    cout << "\n myvec.back()= " <<  myvec.back() ;

} // end of main( )

