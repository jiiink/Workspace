#include <bits/stdc++.h>
#include <functional>
using namespace std;


int main(int argc, char** argv) {
    int a = 0;

    [=]() mutable {
        a++;
        cout << "���� ���� : " << a << endl;
    }();

    // mutable�� �ٲ��־��� �ѵ� �ᱹ�� ���� �مf���Ƿ� �ܺ��� ������ �ٲ��� ����
    cout << "���� �ܺ� : " << a << endl;
    return 0;

}


