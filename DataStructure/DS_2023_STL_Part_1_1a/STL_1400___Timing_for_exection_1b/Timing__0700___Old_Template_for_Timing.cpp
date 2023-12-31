#include <iostream>
#include <iomanip>
#include <chrono>
#include <cmath>
using namespace std ;


void Test(){
	for ( long i = 0; i < 10000000; ++i )	{
		sqrt(  (double)i * (double)(i*13.0) );
	}
} // end of Test( )



int main(){

	chrono::system_clock::time_point mybegin, myend ;
	chrono::duration<double> sec ;  // �ð� ���� ����ϴ� Ư���� ����


	mybegin = chrono::system_clock::now();    // ��Ĭ, ���� �ð� ��ϴ�.
        Test();  // ������ �Լ��� ���⿡ �ֽ��ϴ�.
	myend   = chrono::system_clock::now() ;  // ��Ĭ, ������ �ð� ���

	sec = myend - mybegin ;

	cout << "Test() 1: ���� �ð�(��) : " << sec.count() << " seconds" << endl;

	mybegin = chrono::system_clock::now();    // ��Ĭ, ���� �ð� ��ϴ�.
        Test();  // ������ �Լ��� ���⿡ �ֽ��ϴ�.
	myend   = chrono::system_clock::now() ;  // ��Ĭ, ������ �ð� ���
	cout << "Test() 2: ���� �ð�(��) : " << sec.count() << " seconds" << endl;
	return 0;
}
