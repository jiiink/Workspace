// map�� CodeBlock���� ����Ϸ��� �ݵ�� Comipler���� C+11 �� check�ؾ� �մϴ�.
// Have g++ follow the C++11 ISO C++ language standard

#include <bits/stdc++.h>
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    map <string, int> M ;

    M["book"]= 123 ;
    M["note"]=  67 ;
    M["Cold"]=  78 ;


    try {
        cout << "Non element M.at('note')=> " << M.at("note") << endl ;
    }
    catch (const out_of_range& oor) {
        cout << "\n ū�� ���� ...Out of Range ������ �߻��߽��ϴ�. ";
        cerr << "\n �����޽���: " << oor.what() << '\n';
    }

    /*

    try {
        cout << "Non element M.at('W')=> " << M.at("W") << endl ;
    }
    catch (const out_of_range& oor) {
        cout << "\n ū�� ���� ...Out of Range ������ �߻��߽��ϴ�. ";
        cerr << "\n �����޽���: " << oor.what() << '\n';
    }
    */


    cout << "�ܺο��� ���, Non element M.at('W')=> " << M.at("W") ;

    return 0 ;

}

