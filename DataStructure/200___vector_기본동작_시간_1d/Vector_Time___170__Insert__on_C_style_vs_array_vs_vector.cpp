// ����ð� �����ϴ� �Լ�
// ��� vector reserve�� ū �ŷ��� ����.

#include <iostream>
#include <chrono>
#include <cmath>
#include <functional>  // �̰� ����ؾ� function�� ������ �ѱ� �� �־��.
#include <vector>
#include <array>

using namespace std ;


#define N 10000000  // õ����, �ݵ�� �ۿ� ���Ͼ� �Ѵ�.
array  <long, N>  myarray ;
vector <long   >  myvector ;
vector <long   >  Rvec(N)  ;      // �̰� �̸� N���� ��Ƶ�
int    carray         [N] ;

void C_style_insert(){
	for ( long i = 0; i < N; ++i )	{
		carray[i]=i ;
	}
}

void array_insert(){
	for ( long i = 0; i < N; ++i )	{
		myarray[i]=i ;
	}
}

// ���⿡�� relocation�� �߻��Ѵ�.
void vector_push_back(){
	for ( long i = 0; i < N; ++i )	{
		myvector.push_back( i ) ;
	}
}

void Rvector_push_back(){
	for ( long i = 0; i < N; ++i )	{
		Rvec.push_back( i ) ;
	}
}
// �ð��� ������ �Լ��� �ݵ�� void fun( ) �� ������ �մϴ�.
//  ��ٺθ��� parameter ������ �ȵ˴ϵ���....

double Time_Check( string MSG, function <void ( )> target ){
    chrono::system_clock::time_point mybegin, myend ;
    chrono::duration<double> sec ;
    double tsec ;

	mybegin = chrono::system_clock::now();
        target();  // ������ �Լ�
	myend   = chrono::system_clock::now() ;
	sec = myend - mybegin ;

    tsec = sec.count() ;
    cout << "\n" << MSG << ": " << tsec << endl;
    return( tsec ) ;
} // end of Time_Check( ) by Zoh 2020. �߼� ������ ��ħ��

int main(){
    Time_Check( "array insert",  array_insert) ;
    Time_Check( "vector pushback", vector_push_back ) ;
    Time_Check( "Rvector pushback", Rvector_push_back) ;
    Time_Check( "c-���� insert"     , C_style_insert) ;
	return 0;
}
