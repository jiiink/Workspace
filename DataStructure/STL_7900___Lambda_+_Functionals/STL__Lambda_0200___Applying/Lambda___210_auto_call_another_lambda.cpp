#include <bits/stdc++.h>
#include <functional>
using namespace std;

int main(int argc, char** argv) {
    array<int, 10> arr = { 3, 2, 1, 4, 9, 10, 7, 8, 4, 6 };
    auto ShowOriginalArray = [=]()     {
        for_each(arr.cbegin(), arr.cend(), [](int i) {      // ���ٰ� �Լ� ��ü��� ����

            cout << i << ",";

        });
        cout << endl;
    };
    ShowOriginalArray();
    sort(arr.begin(), arr.end(), less<int>());
    auto ShowSortedArray = [=]()  {
        for_each(arr.cbegin(), arr.cend(), [](int n) {       // ���ٰ� �Լ� ��ü��� ����
                    cout << n << ",";
        });
        cout << endl;
    };
    ShowSortedArray();   // ���� �Լ����� &�� ���� �ʰ� = ���� �޾����Ƿ� �Լ� ���ο����� ���

    ShowOriginalArray();  // ������ ������� ����
    return 0;

}

