#include <bits/stdc++.h>
#include <iostream>
#include <stdexcept>
#include <exception>
using namespace std;




int main() {

    vector <int> wox { 105, 106, 107 } ;

    cout << "\n wox[0] = " << wox[0]   ;        // A
    cout << "\n wox.at(0) = " << wox.at(0) ;    // B

    try{
        cout << "\n wox.at(5) = " << wox.at(5) ;
    }
    catch( std::out_of_range& e) {
        cout << " at()- ���� �߻� ! \n ���� ���� : \n" << e.what() << std::endl;
    } ;    // out of range error�� �������� �߻�


    // cout << "\n vox[0] = " << vox[0]   ;
    // ��å����. ���Ұ� ���� ������ system fault

} // end of main ( )

