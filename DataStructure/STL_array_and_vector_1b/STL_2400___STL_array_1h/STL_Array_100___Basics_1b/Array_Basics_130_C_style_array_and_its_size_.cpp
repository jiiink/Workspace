#include <bits/stdc++.h>


// �������� ũ�⸦ ������ �� ���
#define xsize(type) ((char *)(&type+1)-(char*)(&type))
using namespace std;


int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    long double darr[]  = { 0.1, 0.2, 0.3, 0.4, 0.5, 0.6 } ;
    int osize = *(&arr + 1) - arr;

    cout << "\n 1. : " << osize;
    cout << "\n 2. : " << xsize(arr)  ; // in terms of bytes
    cout << "\n 3. : " << xsize(arr[0]) ;  // in terms of bytes
    cout << "\n 4. : " << xsize(arr) / xsize(arr[0]);
    cout << "\n 5. : " << xsize(darr)  ;  // duble�� �ϳ��� ũ�Ⱑ 16 BYTES
    cout << "\n 6. : " << xsize(darr[0]) ;
    cout << "\n 7. : " << xsize(darr) / xsize(darr[0]);

return 0;
}


