#include <iostream>
#include <set>
using namespace std ;

int main () {
    multiset<int> mset;

    mset.insert(10); mset.insert(20);
    mset.insert(10); mset.insert(10);
    mset.insert(50); mset.insert(30);
    mset.insert(40); mset.insert(30);

    cout << "mset{} ���빰 : ";
    while (!mset.empty()) {
        cout << "\n ���� ��: " << *mset.begin();
        mset.erase(mset.begin());
    }
    cout << '\n';

    return 0;
}
