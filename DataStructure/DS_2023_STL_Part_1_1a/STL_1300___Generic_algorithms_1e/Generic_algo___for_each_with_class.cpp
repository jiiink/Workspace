#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

void print_fnc(int n) {
    cout << n << " ";
}

int main() {

    int N[5] = { 1, 2, 3, 4, 5 };
    cout << "\n �Ϲ����� for ��" << endl;

    for( int i = 0; i < 5; ++i ) {
        cout << i << endl;
    }


    cout << "\n for_each( N, &N[4], print_fnc " << endl;
    for_each( N, &N[4], print_fnc );


    cout << "\n range base for ��" << endl;

    for( auto i : N ) {
        cout << i << endl;
    }

    return 0;
}

