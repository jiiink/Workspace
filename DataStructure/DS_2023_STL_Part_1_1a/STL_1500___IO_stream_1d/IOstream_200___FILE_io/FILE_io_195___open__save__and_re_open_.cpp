#include <iostream>
#include <fstream>
using namespace std;


int main() {
    string fname = "people.txt" ;
    ifstream myfile( fname );
    int i, age, isum ;
    string myline, name ;


    getline( myfile, myline ) ;    cout << "\n i= " << ++i << ":  " <<  myline ;
    getline( myfile, myline ) ;    cout << "\n i= " << ++i << ":  " <<  myline ;
    getline( myfile, myline ) ;    cout << "\n i= " << ++i << ":  " <<  myline ;

    auto mypos = myfile.tellg();  // saves position.
    myfile.close();

    cout << "\n\n close( ) �� ���� �ڸ����� ������ϰ� �װ����� ���� \n" ;
   if (! myfile.is_open()) {
       myfile.open( fname);  // open again !
       if (!  myfile ) {
           cout << "ouch ! file disapeared ==> process error " ;
       }
       myfile.seekg(mypos);              // restore position
       if (! myfile) {
           cout << "ouch ! position no longer reachable  ==> process error " ;
       }
       getline( myfile, myline ) ;    cout << "\n i= " << ++i << ":  " <<  myline ;
       getline( myfile, myline ) ;    cout << "\n i= " << ++i << ":  " <<  myline ;
       getline( myfile, myline ) ;    cout << "\n i= " << ++i << ":  " <<  myline ;
       getline( myfile, myline ) ;    cout << "\n i= " << ++i << ":  " <<  myline ;
   }


    return 0;
}
