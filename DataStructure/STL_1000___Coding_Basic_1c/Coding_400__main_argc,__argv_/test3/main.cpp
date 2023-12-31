// Ư�� ������ �̸��� argv�� �Ѱܼ� �о�� ���

#include <fstream>
#include <iostream>

using namespace std;

int main ( int argc, char *argv[] ) {

    if ( argc != 2 ) // argc�� 2���� �ƴϸ� argv[0]�� ���α׷� �̸� �� ��ü
        cout<<"usage: "<< argv[0] <<" <filename>\n";
    else { // We assume argv[1] is a filename to open
        ifstream the_file ( argv[1] );

        if ( !the_file.is_open() ) cout<<"Could not open file\n";
        else {
            cout << "----------begin-------------"     << endl ;
            char x; // the_file.get ( x ) returns false if the end of the file
               while ( the_file.get ( x ) )
                   cout<< x;
             cout << "---------end--------------"     << endl ;
        } // the_file is closed implicitly here

    } // end of if()

} // end of main()
