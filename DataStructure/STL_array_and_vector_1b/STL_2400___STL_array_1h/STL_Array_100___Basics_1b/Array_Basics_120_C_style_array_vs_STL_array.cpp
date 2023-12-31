#include <bits/stdc++.h>
#include <iostream>
using namespace std ;

/*
�츮�� �迭�� �Լ��� �ѱ�� �װ��� array�� Ư���� �Ұ�
���� �ϳ��� pointer�� ���Ѵ�. �츮 �����Ϸ�������
pointer�� 4 byte�� ���������Ƿ� ����� 1�� �ȴ�.
*/

void printSize(int A[5] ) {
    cout << "sizeof A[5]: " << sizeof(A) << endl;
    cout << "size= " << sizeof(A)/sizeof(int) << endl;
}

void printElements( array<int,5> &someArray) {
    cout << "In printElements( ): " ;
    for ( int i : someArray) {
       cout << i << ", " ;
    }
}

int main() {

    int myArray[5] = {1, 2, 3, 4, 5};
    array <int,5>   stlarray  {12, 23, 34, 45, 56 } ;

    size_t arraySize = sizeof(myArray) / sizeof(int)  ;
    cout << "\n " << sizeof(myArray) << "  " <<  sizeof(int) << endl ;
    cout << "C-style array size: " << arraySize << endl;

    printSize(myArray);          //�Լ��� �ѱ�� myArray�� pointer�θ� �Ѿ.
    printElements( stlarray ) ;

    cout << "\n �� STL array�� ����ؾ� �ϴ°�?: \n " ;
    for(auto w : stlarray) cout << w << "-" ;

}

