#include <bits/stdc++.h>
using namespace std;

int main() {

    try {
        cout << "\n Exception ���� ��������....\n";
        throw 44542;
    } catch (int i) {
        cout << " ���� Exception�� ����(caught), �� ���� : " << i << '\n';
    }

    try {
        cout << "\n 3. ������ 5�� ���� V(5)�� ������.";
        vector<int> v(5);
        cout << "\n 4. v(5)���� ������ 11���� ���Ҹ� �θ�.";
        cout << v.at(10); // vector::at() throws out_of_range
    } catch (const exception& e) { // caught by reference to base
        cout << "\n 5. ǥ�� exception �� ������. �� �޽����� \n : "
                  << e.what() << "'\n";
    }

} // end of main( )
