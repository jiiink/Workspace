// map�� CodeBlock���� ����Ϸ��� �ݵ�� Comipler���� C+11 �� check�ؾ� �մϴ�.
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    map< string, map<string, int > > m1;


    pair< int, int> mpair ;

    m1[ "Tom"  ]["Mary"  ] = 2011;
    m1[ "Tom"  ]["Sally" ] = 2015;
    m1[ "Sally"]["Brad"  ] = 1987;
    m1[ "Jilda"]["Sonny"]  = 2022;

    string wife, husband ;

    wife = "Mary" ; husband="Tom" ;

    cout << " m1[Tom][Mary]= " << m1[ husband][ wife] << endl;

    return 0;
}
