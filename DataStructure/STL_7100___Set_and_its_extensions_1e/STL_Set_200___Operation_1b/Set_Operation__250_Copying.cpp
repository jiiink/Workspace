// ������ ����� ����

#include <iostream>
#include <set>
#include <string>
using namespace std;

void set_print( string heading,  set<int> myS ) {

    cout << "\n\n " << heading << " : " ;
    for(auto w : myS){
        cout << " " << w ;
    }
}

int main() {
    cout << "������ ����� ���ô�." ;
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');
    int a[] = {7, 4, 9, 1, 3, 4, 8, 2, 7, 5, 3, 6, 10, 4};
    set<int> s(a, a+14);

    cout << "\nHowever, the size of the set is " << s.size() << ".";
    set_print( "����1 Set s",  s ) ;

    set<int> s2(s) ;   // s�� s2�� �����մϴ�.
    set_print( "����2 Set s2",  s2 ) ;

    set<int> s3 ;
    set_print( "����3 �� ���� Set s3",  s3 ) ;

}
