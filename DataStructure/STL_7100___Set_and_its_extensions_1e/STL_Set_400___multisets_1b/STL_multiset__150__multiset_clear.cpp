// multiset::clear
#include <iostream>
#include <set>
using namespace std ;


int main () {
    multiset<int> pnuset;

    pnuset.insert (11);
    pnuset.insert (42);
    pnuset.insert (11);

    cout << "\n pnuset ���빰: \n ";
    for (multiset<int>::iterator it=pnuset.begin(); it!=pnuset.end(); ++it)
        cout << ' ' << *it;
    cout << '\n';

    pnuset.clear();  // �Ѳ����� ��â �����.
    cout << "\n pnuset.clear( ) ���� : \n ";
    pnuset.insert (200);
    pnuset.insert (100);

    cout << "\n pnuset.clear( ) �߰� insert( )����  : \n ";
    for (multiset<int>::iterator it=pnuset.begin(); it!=pnuset.end(); ++it)
        cout << ' ' << *it;

    cout << '\n';

    return 0;
}
