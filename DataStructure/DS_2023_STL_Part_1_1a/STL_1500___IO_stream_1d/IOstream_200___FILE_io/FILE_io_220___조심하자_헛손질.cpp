#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ifstream iFile("numbers.txt");    // input.txt has integers, one per line
    int i,x;

    while ( !iFile.eof() ) {
        iFile >> x;
        cerr << "i= " << ++i << "  numbers = " << x << endl;
    }

    return 0;
}

//  90�� �ѹ��� �д´�.
/*  numbers.txt
74
51
-65
-38
12
45
33
8
90

*/
