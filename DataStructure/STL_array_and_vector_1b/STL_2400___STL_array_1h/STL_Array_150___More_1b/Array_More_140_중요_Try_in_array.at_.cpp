#include <bits/stdc++.h>
#include <iostream>
#include <stdexcept>
#include <exception>
using namespace std;




int main() {

    array <int,7> stl_array { 100, 101, 102, 103, 104, 105, 106 } ;

    cout << "\n stl_array[0] = " << stl_array[0]   ;        // A
    cout << "\n stl_array.at(0) = " << stl_array.at(0) ;    // B
    cout << "\n stl_array[2] = " << stl_array[0]   ;        // A
    cout << "\n stl_array.at(2) = " << stl_array.at(0) ;    // B

    try{
        cout << "\n stl_array.at(8) = " << stl_array.at(8) ;
    }
    catch( std::out_of_range& e) {
        cout << "\n\n ��������... \n at()- ���� �߻� ! " ;
        cout << "\n ���� ���� : \n" << e.what() << std::endl;
    } ;    // out of range error�� �������� �߻�



} // end of main ( )

