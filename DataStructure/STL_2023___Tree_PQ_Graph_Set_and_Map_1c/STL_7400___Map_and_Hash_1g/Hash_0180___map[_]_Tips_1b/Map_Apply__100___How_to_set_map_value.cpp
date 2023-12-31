#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, int> Employees;

    // 1) Assignment using array index notation
    Employees["Mike C."   ] = 5234;
    Employees["Charlie M."] = 3374;

   // 2) Assignment using member function insert() and STL pair
    Employees.insert(pair<string,int>("David D.",1923));

    // 3) Assignment "value_type()"
    Employees.insert(map<string,int>::value_type("John A.",7582));

    // 4) Assignment insert() and "make_pair()"
    Employees.insert(make_pair("Peter Q.",5328));

    cout << "Map size: " << Employees.size() << endl;

    // � ���� ���� ������, � ���̰� �ִ��� ã�ƺ��ô�.

    for( auto ii=Employees.begin(); ii!=Employees.end(); ++ii) {
        cout << (*ii).first << ": " << (*ii).second << endl;
    }
}
