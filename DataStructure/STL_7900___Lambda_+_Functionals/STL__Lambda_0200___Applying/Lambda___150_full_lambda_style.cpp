#include <bits/stdc++.h>
#include <functional>
using namespace std;



int main(int argc, char** argv) {

    [](void){cout << "���ְ� ��� �ʹ�" << endl;}();
    [](string name){cout << "Hello " << name.c_str() << endl; }("World!");

    bool bChk = [](int a) -> bool{   // ��������� �������� ������ �����Ϸ��� �ڱ� ����� ����
        if (a%2 == 0)
            return false;
        return true;
    }(1);


    cout << "\n bChk = " << bChk << endl;
    return 0;

}





