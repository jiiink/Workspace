// array�� static structure�μ� �̸� ������ Ȯ���ϹǷ�
// �ӵ��� dynamic array�� vector���� ������.


#include <bits/stdc++.h>
using namespace std ;

int main() {
    array<int, 10> arr1;
    vector<int>    vec1;

    for( int i = 0; i < 5; ++i ) {
        arr1[i] = i*100+1;
    }

    for( int i = 0; i < 10; ++i ) {
        cout << arr1[i] << endl;
    }



    array<int, 5> arr2 = { 11, 12, 13, 14, 15 };

    for( auto iter = arr2.begin(); iter != arr2.end(); ++iter ) {
        cout << *iter << endl;
    }

    return 0;
}


