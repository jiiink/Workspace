// vector::size
#include <bits/stdc++.h>
using namespace std;

class Chulsoo {
public:
    int count;
};

int main() {
    Chulsoo chulsoo;
    chulsoo.count = 1;

    for (int i = 0; i < 10; i++)     {
        [=] {cout << chulsoo.count << "��° ������ũ�� �Դ´�." << endl; }();
    }

    for (int i = 0; i < 10; i++)     {
        [&]{cout <<  "��ȭ�� " << chulsoo.count++ << "��ȭ�� ��° ������ũ�� �Դ´�." << endl; }();
    }

    return 0;
}


