#include <bits/stdc++.h>
using namespace std;

int main() {

	allocator<int> myAllocator;  //���� ������ ����� ������̴�.

	int* arr = myAllocator.allocate(5); 	// 5���� ���� ������ ���� �� �ּҸ� arr�� �ش�.
	myAllocator.construct(arr  , 111 ); 	    // arr[0]��  111�� ä���.
	myAllocator.construct(arr+4, 444 ); 	    // arr[4]��  444�� ä���.
	arr[3] = 310;


	cout << "arr[0] = " << arr[0] << endl;
	cout << "arr[1] = " << arr[1] << endl;
	cout << "arr[2] = " << arr[2] << endl;
	cout << "arr[3] = " << arr[3] << endl;
	cout << "arr[4] = " << arr[4] << endl;

	myAllocator.deallocate(arr, 5); 	// deallocate space for five ints

	return 0;
}
