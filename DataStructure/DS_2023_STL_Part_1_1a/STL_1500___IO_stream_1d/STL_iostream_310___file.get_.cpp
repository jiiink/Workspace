#include <bits/stdc++.h>
using namespace std;

int main () {
    string str;

    ifstream file ("test.txt",ios::in|ios::ate);

    if (file) {
        ifstream::streampos filesize = file.tellg();
        str.reserve(filesize);

        file.seekg(0);
        while (!file.eof()) {
            str += file.get();
        }
        cout << "\n --------- test.txt�� ���ڿ��� ���� ��� :------------ \n " << str;
        cout << "\n --------- test.txt�� ���ڿ��� ���� ��� :------------ \n " ;
    }
    return 0;
}
