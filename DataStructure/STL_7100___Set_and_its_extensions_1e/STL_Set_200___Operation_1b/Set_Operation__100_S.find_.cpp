
#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {

    cout << "\n �ϳ��� ������ ����ϴ�. \n";
    string a[] = {"Tom", "Dick", "Harry", "Alice"};
    set<string> setOfNames(a, a+4);

    cout << "\n Here are the " << setOfNames.size() << " names in the set."
        "\n Compare their order here with their order in the array:\n";

    set<string>::iterator p = setOfNames.begin();
    while (p != setOfNames.end()) cout << *p++ << " ";

    string nameToFind;
    cout << "\n ã�ƾ� �� �̸�(Name)�̳� enter(����)�� �Է��Ͻÿ�. ";
    getline(cin, nameToFind);

    while (nameToFind != "") {
        p = setOfNames.find(nameToFind);
        if (p != setOfNames.end())
            cout << " á���� " << nameToFind << ".\n";
        else
            cout << nameToFind << " �̸��� �����ϴ�. \n";
        cout << "\n �ٽ� ã�ƾ� �� �̸�(Name)�� �Է���ÿ�. : ";
        getline(cin, nameToFind);
    }


} // end of main()

