#include <iostream>
#include <chrono>
#include <iomanip>
#include <chrono>
#include <cmath>
using namespace std ;

int Equal_basic(int x, int y) {
    if ( x == y ) return 1 ;
    else return 0 ;
}

int Equal_fast(int x, int y) {
    return ( abs(x-y) - 1 ) ;
}

#define N1 10000000   // õ����
#define N2 100000000  // 1���

void Test_basic(){
    int x, y, r ;
    srand( 2022) ;
	for ( long i = 0; i < N2 ; ++i )	{
        x = rand()% 10 ;
        y = rand()% 10 ;
        r = Equal_basic(x,y) ;
	}
} // end of Test( )

void Test_fast(){
    int x, y, r ;
    srand( 2022) ;
	for ( long i = 0; i < N2 ; ++i )	{
        x = rand()% 10 ;
        y = rand()% 10 ;
        r = Equal_fast(x,y) ;
	}
} // end of Test( )


int main(){

	chrono::system_clock::time_point mybegin, myend ;
	chrono::duration<double> sec ;  // �ð� ���� ����ϴ� Ư���� ����
	double duration ;
    int x, y ;

	mybegin = chrono::system_clock::now();    // ��Ĭ, ���� �ð� ��ϴ�.
        Test_basic() ;
	myend   = chrono::system_clock::now() ;  // ��Ĭ, ������ �ð� ���

	sec = myend - mybegin ;
	cout << "Test_basic() ���� �ð�(��) : " << sec.count() << " seconds" << endl;

	mybegin = chrono::system_clock::now();    // ��Ĭ, ���� �ð� ��ϴ�.
        Test_fast() ;
	myend   = chrono::system_clock::now() ;  // ��Ĭ, ������ �ð� ���

	sec = myend - mybegin ;

	cout << "Test_fast() ���� �ð�(��) : " << sec.count() << " seconds" << endl;
	return 0;
}
