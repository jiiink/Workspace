#include <iostream>
#include <chrono>
#include <iomanip>
#include <chrono>
#include <cmath>
using namespace std ;

int Threeval_basic(int x, int y) {
    if ( x == y ) return  0 ;
    if ( x > y  ) return  1 ;
    if ( x < y  ) return -1 ;
}

int Threeval_fast(int x, int y) {
   return( (x>0)-(x<0));
}

#define N1 10000000   // õ����
#define N2 100000000  // 1���

void Test_basic(){
    int x, y, r ;
	for ( long i = 0; i < N2 ; ++i )	{
        x = rand()% 10 ;
        y = rand()% 10 ;
        r = Threeval_basic(x,y) ;
	}
} // end of Test( )

void Test_fast(){
    int x, y, r ;
	for ( long i = 0; i < N2 ; ++i )	{
        x = rand()% 10 ;
        y = rand()% 10 ;
        r = Threeval_fast(x,y) ;
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

	cout << "Basic() ���� �ð�(��) : " << sec.count() << " seconds" << endl;
	mybegin = chrono::system_clock::now();    // ��Ĭ, ���� �ð� ��ϴ�.
        Test_fast() ;
	myend   = chrono::system_clock::now() ;  // ��Ĭ, ������ �ð� ���

	sec = myend - mybegin ;

	cout << "Fast() ���� �ð�(��) : " << sec.count() << " seconds" << endl;
	return 0;
}
