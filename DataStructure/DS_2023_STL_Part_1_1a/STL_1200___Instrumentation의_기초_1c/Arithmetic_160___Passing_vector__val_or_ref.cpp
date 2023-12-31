// Prof.Zoh's Work

#include <functional>
#include <bits/stdc++.h>
#include <random>

#define Lsize 6
using namespace std ;

long    Size[ Lsize ] = { 100000, 200000, 400000, 800000, 1600000, 3200000 } ;
vector  <float>    VF[ Lsize ] ;
list    <float>    LF[ Lsize ] ;
int     Gindex ;

void byvalue( vector<float> Para ){
    Para.push_back(3.14);
}

void byreference( vector<float> &Para ){
    Para.push_back(3.14);
}

void pass_val( ){
     byvalue( VF[Gindex] ) ;
}

void pass_ref( ){
     byreference( VF[Gindex] ) ;
}


double Time_Check( string MSG, function <void ( )> target, int w ){
    chrono::system_clock::time_point mybegin, myend ;
    chrono::duration<double, milli> msec ;
    double tsec ;

	mybegin = chrono::system_clock::now();
        target( );  // ������ �Լ�
	myend   = chrono::system_clock::now() ;
	msec = myend - mybegin ;

    tsec = msec.count() ;
    cout << MSG << ": " << tsec ;
    return( tsec ) ;
} // end of Time_Check

void set_data (){
    srand( 20229 );
    float fval ;
    for(int lindex =0 ; lindex < Lsize ; lindex++) {
        for(long i=0; i < Size[lindex] ; i++){
            fval = rand()/ RAND_MAX ;
            VF[ lindex ].push_back( fval ) ;
        }
    cout << "> In set_data( ): Size = " << Size[lindex] << " prepared " <<endl ;
    } // end of for i
} // set_data( )

int main(){
    string msg ;
    set_data( ) ;
    cout << "\n > ��� �ڷᱸ���� �غ�Ǿ����ϴ�.  \n" ;

    cout << "\n\n vector <float>�� value�� pass �ϱ� \n" ;
    for( Gindex=0 ; Gindex < Lsize ; Gindex++){
        msg= "\n> vector( "+ to_string( Size[Gindex]) + " ) passing time: ";
        Time_Check( msg, pass_val, Gindex ) ;
    }

    cout << "\n\n vector <float>�� reference�� pass �ϱ� \n" ;
    for( Gindex=0 ; Gindex < Lsize ; Gindex++){
        msg= "\n> vector( "+ to_string( Size[Gindex]) + " ) passing time: ";
        Time_Check( msg, pass_ref, Gindex ) ;
    }
	return 0;
}
