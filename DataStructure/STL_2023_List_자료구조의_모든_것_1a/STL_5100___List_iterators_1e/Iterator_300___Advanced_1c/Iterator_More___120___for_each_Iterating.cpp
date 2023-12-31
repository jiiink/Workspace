#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

void print (int elem) {
    cout << "\n �˱� > " << elem << ' ';
}


int main() {

    list<int> myl = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    cout << "\n for_each()�� �ҿ��� ���ϴ�." ;
    for_each ( myl.begin(), myl.end(), print);  // functor�� �θ���.

    cout << "\n\n �Ųٷ� ��� ���ϴ� " ;
    // print all elements in reverse order
    for_each ( myl.rbegin(), myl.rend(), print);

}
