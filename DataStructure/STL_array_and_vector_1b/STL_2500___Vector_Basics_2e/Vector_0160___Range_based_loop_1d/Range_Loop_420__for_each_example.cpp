
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void printx2(int a) {
    cout << "\n in printx() " << a * 2 << " ";
}


struct Class2 {  // �����ڵ� class�� ����� ��.
    void operator() (int a) {
        cout << a * 3 << " ";
    }
} ob1;


int main() {

    int arr[5] = { 1, 5, 2, 4, 3 };

    cout << "\n �迭���� for_each( ):" << endl;



    cout << "\n Multiple of 2 of elements are : ";
    for_each(arr, arr + 5, printx2);


    cout << "\n Multiple of 3 of elements are : ";
    for_each(arr, arr + 5, ob1);


    // initializing vector
    vector<int> arr1 = { 4, 5, 8, 3, 1 };

    cout << "\n Vector���� for_each( ):" << endl;


    cout << "\n Multiple of 2 of elements are : ";
    for_each(arr1.begin(), arr1.end(), printx2);



    cout << "\n Multiple of 3 of elements are : ";
    for_each(arr1.begin(), arr1.end(), ob1);


}
