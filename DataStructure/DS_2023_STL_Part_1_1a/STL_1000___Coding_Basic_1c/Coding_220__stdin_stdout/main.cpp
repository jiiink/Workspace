// Ư���� solution�� ����. console���� �۾��ϴ� �� �ۿ� ����

#include <iostream>
#include <bits/stdc++.h>

// �Է��� �� EOF�� ^Z

using namespace std;

int main() {

    vector <int> mv ;
    int token, i =0 ;

    cout << "���ڸ� �Ѱ� �� �Է��Ͻÿ�.  : \n" ;

    while( cin >> token   ) {
           cout << "\n " << ++i <<": token: " <<  token << endl  ;
           mv.push_back( token ) ;
    }

    cout << "\n �Է��� ��� �������ϴ�. " << endl;
    return 0;
}
