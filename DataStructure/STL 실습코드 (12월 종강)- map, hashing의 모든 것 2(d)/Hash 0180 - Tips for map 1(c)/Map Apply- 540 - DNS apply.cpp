#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, string> DNS;
    string webname ;

    DNS["pusan.ac.kr"   ] = "164.125.34.56";
    DNS["www.whiskey.com"   ] = "45.67.890.900";
    DNS["gallmegi.beer.co.kr"   ] = "45.567.89.234" ; // 10�ﰳ ����



    cout << "��... web �ּ� �ĺ���! ;" ;
    cin >> webname ;

    cout << DNS[ webname ] ;
}
