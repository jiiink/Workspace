// vector���� ������ �� �ִ� �پ��� ����(operator) �� sorting�� ������ ��
#include <bits/stdc++.h>

using namespace std;


int main() {

    int i,j ;

    cout << "������ vector�� sorting �� ���ϴ�." ;

	vector < vector<int> > vvi = { {4,5}, {7,6}, {2,6}, {1,7}, {7,4}, {3,5}, {4,7}, {5,1} } ;
    sort( vvi.begin(), vvi.end() ) ;

    for(int i=0 ; i < vvi.end()-vvi.begin(); i++){
        cout << "\n" << vvi[i][0] << ", " << vvi[i][1] ;
    }
	return 0;
} // end of main ( )
