
#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std ;

int main() {
    string text = "Summer-Cool-Time" ;
    string kext = "Summer-�ѱ�-Time" ;

    vector <char>    vc (text.begin(), text.end()) ;
  //vector <string>  vs (text.begin(), text.end()) ;

    for (auto w : vc ) {
            cout << w << " " ;
    }

    int i = 0 ;
    for (auto w : vc ) {
            i++ ;
            cout << "\n -> " <<  i << " =" << w  ;
    }

}

