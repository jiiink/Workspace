
#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> v) {
    for_each(v.begin(), v.end(), [](int i) {     // lambda�� ���� ���
        std::cout << i << " ";
    });
    cout << endl;
}

int main() {
    vector<int> v {4, 1, 3, 5, 2, 3, 1, 7};

    printVector(v);

    // 4���� ū ���� ����ϱ�
    vector<int>:: iterator p = find_if(v.begin(), v.end(), [](int i) {
        return i > 4;
    });
    cout << "4���� ū ù ���Ҵ�  : " << *p << endl;


    // ���ٷ� �����ϱ�
    sort(v.begin(), v.end(), [](const int& a, const int& b) -> bool {
        return a > b;
    });

    printVector(v);

    // 5���� ū ���� ���� ��Ƹ���
    int count_5 = count_if(v.begin(), v.end(), [](int a) {
        return (a >= 5);
    });
    cout << "5���� ū ������ ������  : "
         << count_5 << endl;

    // ���� ���� �����  duplicate comes together)
    p = unique(v.begin(), v.end(), [](int a, int b) {
        return a == b;
    });

    // ���� �ٸ� ���� ���� ũ��� ���� ���̱�
    v.resize(distance(v.begin(), p));
    printVector(v);

    // ���� �����ϸ� ���ϱ� ��
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int f = accumulate(arr, arr + 10, 1, [](int i, int j) {
        return i * j;
    });

    cout << "10 ���丮����  : " << f << endl;

    //	 We can also access function by storing this into variable
    auto square = [](int i) {
        return i * i;
    };

    cout << "5�� ���� ���� : " << square(5) << endl;
}
