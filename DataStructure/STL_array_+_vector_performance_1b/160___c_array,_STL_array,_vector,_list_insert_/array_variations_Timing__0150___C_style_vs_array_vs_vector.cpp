// ����ð� �����ϴ� �Լ�
// > g++ thisfile.cpp std=C14++

#include <iostream>
#include <chrono>
#include <cmath>
#include <functional>  // �̰� ����ؾ� function�� ������ �ѱ� �� �־��.
#include <vector>
#include <array>
#include <list>

using namespace std ;


#define N 500000  // 50 ���� �ݵ�� �ۿ��� global��  ���Ͼ� �Ѵ�.
array <long, N>  myarray ;
int   carray[N] ;

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

void vector_insert(){
    vector <long >  myvector ;
	for ( long i = 0; i < N; ++i )	{
		myvector.push_back( i ) ;
	}
}

void vector_front(){
    vector <long >  myvector ;
	for ( long i = N; i >= 0 ; i-- )	{
		myvector.insert( myvector.begin(), i ) ;
	}
}

void list_end(){
    list <long >  mylist ;
	for ( long i = N; i >= 0 ; i-- )	{
		mylist.insert( mylist.end(), i ) ;
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

    cout << "\n ���� ���� N = " << N << "\n " ;

    Time_Check("c-style[i]     insert",   C_style_insert ) ;
    Time_Check("array<int>     insert",   array_insert   ) ;
    Time_Check("vector.end()   insert",   vector_insert  ) ;
    Time_Check("List.end()     insert",   list_end       ) ;
    Time_Check("vector.front() insert",   vector_front   ) ;

	return 0;
}  // end of main( )
