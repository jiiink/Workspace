#include <bits/stdc++.h>
using namespace std;

#include "mymaptool.h"

int main() {
    map <string, int> M ;

    M["book"]= 123 ;
    M["note"]=  67 ;
    M["Cold"]=  78 ;

    mapdump( "Run1", M ) ;

    // M[ ]�� ����� ���� �����ϴ� ���� ����� ����.
    cout << "Non element M[X]=" << M["X"] << endl ;

    return 0 ;

}
