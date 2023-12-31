// �ݺ���. ���� �߿��� �����̴�. STL �ڷᱸ���� �����ϴ� ������ ���
// ���� �������� �� ���۰� �� ��ġ, ������ ����ϰ� ���� �ʿ䰡 ����.
// myX.begin(), myX.end()

#include <bits/stdc++.h>
using namespace std;


int main() {
    vector <char> myvector;      // list container for character elements
    vector <char>::iterator          p ;
    vector <char>::reverse_iterator rp ;


    for (char c='A'; c<='K'; ++c) {  // append elements from 'a' to 'z'
        myvector.push_back(c);
    }

    cout << "\n\n ���� �ݺ��ڸ� �̿��ؼ�  ������ �����ϴ�. "  ;
    for(p=myvector.begin(); p < myvector.end(); p++ ) {
        printf("\n %2d = %c", p - myvector.begin() , *p ) ;

    }

    cout << "\n\n ���� �ݺ��ڸ� �̿��ؼ�  �Ųٷ� ���ư��ϴ�. "  ;
    for(rp=myvector.rbegin(); rp < myvector.rend(); rp++ ) {
        printf("\n %2d = %c", rp - myvector.rbegin() , *rp ) ;

    }

    cout << "\n\n ����� �ݺ��ڸ� �̿��ؼ�  �� �ڷ� ����. " ;
    for( p=myvector.end()-1 ; p >= myvector.begin(); p-- ) {
        printf("\n %2d = %c", myvector.end() - p -1  , *p ) ;

    }

} // end of main( )
