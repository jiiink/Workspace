#include <bits/stdc++.h>
using namespace std;

void print_it (int i) { cout << "-> " << i << " "; }

int main() {
    vector<int> va { 4, 5, 6, 11, 13, 15} ;

    cout << "\n �Ϲ����� ������� vector scan" ;
    for_each( va.begin(), va.end(), print_it);

    cout << "\n ���� �Լ��� vector scan" ;
    for_each( va.begin(), va.end(), [](int i){cout << "=> " << i << " ";} );
    cout << endl;

} // end of main( )
