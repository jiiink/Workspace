#include <bits/stdc++.h>
using namespace std;

class Chulsoo {
public:
    int count;
};

int main() {
    Chulsoo chulsoo;
    chulsoo.count = 1;

    cout << "��ȯ�� ->char : " <<
    [=](int steakWeight) mutable->char  {
        cout << "ö���� " << steakWeight << "g¥�� ������ũ�� " << chulsoo.count++ << "��° �Դ´�." << endl;
        return steakWeight;
    }(68) << endl;    // char(68) = D

    cout << "��ȯ�� : " <<
    [=](int steakWeight) mutable     {
        cout << "ö���� " << steakWeight << "g¥�� ������ũ�� " << chulsoo.count++ << "��° �Դ´�." << endl;
        return steakWeight;
    }(67)  << endl;;


    return 0;

} // end of main( )

