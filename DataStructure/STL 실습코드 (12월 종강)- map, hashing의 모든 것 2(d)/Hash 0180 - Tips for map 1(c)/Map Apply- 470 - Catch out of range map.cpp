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
    try {
           cout << "Non element M.at('W')=" << M.at("W") << endl ;
    }
    catch (const out_of_range& oor) {
        cerr << "Out of Range ������ �߻��߽��ϴ�. �����޽���: \n " << oor.what() << '\n';
    }

    return 0 ;

}
