#include <iostream>
#include <chrono>
#include <cmath>
#include <functional>  // �̰� ����ؾ� function�� ������ �ѱ� �� �־��.
#include <vector>
#include <array>
#define N   200000  // 50���� �ݵ�� �ۿ� ���Ͼ� �Ѵ�.
#define Gap  10000  // �� ��� ����

using namespace std ;


void insert_begin( ){
     int feed = 0 ;
     vector<int> vj;
     for (int i=0; i< N ; i++) {
          vj.insert( vj.begin(), i );
     }
}

void push_back( ){
     int feed = 0 ;
     vector<int> vj;
     for (int i=0; i< N ; i++) {
          vj.push_back( i );
     }
}

void insert_end( ){
    int feed = 0 ;
     vector<int> vj;
     for (int i=0; i< N ; i++) {
          vj.insert( vj.end(), i );
     }
}


double Time_Check( string MSG, function <void ( )> target ){
    chrono::system_clock::time_point mybegin, myend ;
    chrono::duration<double, milli> sec ;
    double tsec ;

	mybegin = chrono::system_clock::now();
        target();  // ������ �Լ�
	myend   = chrono::system_clock::now() ;
	sec = myend - mybegin ;

    tsec = sec.count() ;
    cout << "\n" << MSG << ": " << tsec << endl;
    return( tsec ) ;
}


int main(){

    Time_Check( "Insert at V.begin()     ", insert_begin) ;
    Time_Check( "Insert at V.end( )      ", insert_end  ) ;
    Time_Check( "Using  V.push_back( )",  push_back   ) ;

	return 0;
}

