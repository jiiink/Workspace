#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector <string> Box { "Banana", "Apple", "Fox", "Wine", "�ر�ź" };

    vector <string>::iterator        Biter ;
    vector <string>::const_iterator CBiter;   // iterator�� ����Ű�� ���� const !

    CBiter = Box.begin()+2 ;

    for ( Biter = Box.begin(); Biter != Box.end(); Biter++)     {
        *Biter = *Biter + "_end" ;
        cout << *Biter << endl;
    }

    cout << "\n* 1. CBiter= " << *CBiter ;

    CBiter = Box.end( )-1 ; // error�� �����? �ȳ�.
    cout << "\n* 2. CBiter= " << *CBiter ;

    //*CBiter = "Cool" ; // ����� �ٲٸ� �ȵ�. iterator ��ü�� �ٲܼ� �ִ�.

// const_iterator.cpp|24|error: passing 'const std::__cxx11::basic_string<char>' as 'this' argument discards qualifiers [-fpermissive]|

} // end of main( )
