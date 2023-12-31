// ���� 01
#include <iostream>
#include <set>
#include <string>
using namespace std;

void printset( string heading,  set<int> myS ) {
    set<int>::iterator p = myS.begin();
    cout << " >> " << heading << " << \n " ;
    while (p != myS.end()) cout  << *p++ << " ";
}

void rpset( string heading,  set<int> myS ) {
    cout << " >> " << heading << " << \n " ;
    for(auto w : myS ){
        cout << "\n element= " << w ;
    }
}

int main() {
    cout << "������ ����� ���ô�." ;
    cout << "\n Press Enter to continue ... ";
    cin.ignore(80, '\n'); // unbuffered I/O

    int a[] = {7, 4, 9, 9, 3, 4, 8, 2, 7, 5, 3, 6, 2, 4};
    set<int> s(a, a+14);

    cout << "\n set s�� ũ��� =  " << s.size() << ".";
    printset( "\n ����1",  s ) ;

    rpset( "\n ����2",  s ) ;

}
