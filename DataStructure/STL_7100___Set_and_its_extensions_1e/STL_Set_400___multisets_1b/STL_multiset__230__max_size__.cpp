#include <iostream>
#include <set>
using namespace std ;

int main () {
    multiset<int> mset;

    cout << "\n 100�������� ���Ҹ� �����ϴ� multiset ���� :" ;
    int N = 100 ;

    for (int i=0; i< N; i++) mset.insert(i);

    cout << "\n mset.max_size() = " <<  mset.max_size() ;
    cout << "\n mset.size() = "     <<  mset.size() ;

    return 0;
}
