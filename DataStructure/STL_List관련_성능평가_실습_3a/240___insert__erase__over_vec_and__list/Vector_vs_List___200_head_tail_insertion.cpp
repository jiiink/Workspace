// No.1 Execution Time Measurment Instrumentation

#include <iostream>
#include <stdio.h>
#include <ctime>		// Time Check�� �ϱ����� �ʿ��� ���
#include <cmath>		// Math Function���� ����ϱ� ���� ���
#include <vector>
using namespace std;

int main() {
	clock_t	ts, te ;
	time_t	currentTime;
	double	mydouble ;

	time(&currentTime);	// C++ int data type �����ð��� �����մϴ�.
	cout << " Vector�� ù ��ġ�� ��� N�� ���� \n\n";

	vector<int> M ;

	int N = 200000 ;
	ts = clock();
	for(int i=0 ; i <= N ; i++){
        M.insert( M.begin(), i ) ;
	}
	te = clock();		// 1. ����ð� üũ

	cout << "\n begin() insert time= " << ((double)(te - ts))/(long)CLOCKS_PER_SEC << " sec" ;

	ts = clock();
	for(int i=0 ; i <= N ; i++){
        M.insert( M.end(), i ) ;
	}
	te = clock();		// 1. ����ð� üũ

	cout << "\n   end() insert time= " << ((double)(te - ts))/(long)CLOCKS_PER_SEC << " sec" ;



	return 0;

}//End of Main
