/*
� vector�� pointer�� �����Ǿ� �ִµ�
�̰��� ���󰡸� �ٸ� ���� ���Ͱ� �ִ�.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int i,j, k ;
    vector <int> posi = {   1,   2,   3,   4,   5, 6, 7, 8, 9, 10} ;
    vector <int> nega = { -11, -22, -33, -44, -55} ;
    vector <int * >  iv ;
	vector < vector<int> *>   vv ;
	vector < vector<int> *>::iterator itvv ;

	vv.push_back( &posi ) ;
	vv.push_back( &nega ) ;

	cout << "\n Test 1 = " << (*vv[0])[4] ;
	//                  ù��° pointer�� ���󰡼� ������ vector�� 4��° ����
	cout << "\n Test 2 = " << (*vv[1])[0] ;

} // end of main()
