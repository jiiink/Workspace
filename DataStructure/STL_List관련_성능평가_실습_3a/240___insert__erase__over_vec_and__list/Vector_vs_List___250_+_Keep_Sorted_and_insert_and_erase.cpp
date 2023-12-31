#include <bits/stdc++.h>
#include <random>
using namespace std ;

#define N 1000000  // �ʱ� �غ�� ���� �� 100����
#define M 1000     // insert�� ������ ����

vector<double>       vecflo, insdata ;
list  <double>       lstflo ;

int main(){
    chrono::system_clock::time_point mybegin, myend ;
    chrono::duration<double,milli> sec ;
    double tsec, myrand, ftemp  ;

    int i,j ;

    srand(220911);

    cout << "\n Data �غ��ϱ� " << endl ;
        mybegin = chrono::system_clock::now();
    for(i=0; i < N ; i++){
        myrand = rand( )/RAND_MAX  ;
        vecflo.push_back( myrand ) ;
        lstflo.push_back( myrand ) ;
    }
    sort( vecflo.begin(), vecflo.end());
    lstflo.sort( );

    for(i=0; i < M ; i++){
        myrand = rand( )/RAND_MAX  ;
        insdata.push_back( myrand) ;
    }
    myend   = chrono::system_clock::now();
    sec = myend - mybegin;
    tsec = sec.count();
    cout << ">  ������ �غ�ð� Time : "<< tsec << endl;

    cout << "\n  vector vecflo[]�� ������. " << endl ;
    mybegin = chrono::system_clock::now();
    for (i = 0; i < M; ++i) {
         ftemp = insdata[i] ; // ������ ������
         if(i%100 == 0 ) cout << "  *";
         auto vit= vecflo.begin();
         for( vit= vecflo.begin(); vit != vecflo.end(); vit++){
            if( ftemp < *vit) break ; // �� ��ġ ����
         }
         vecflo.insert( vit, ftemp );
    }
    myend   = chrono::system_clock::now();
    sec = myend - mybegin;
    tsec = sec.count();
    cout << "\n>  vector<float> random insert Time : "<< tsec << endl;

    cout << "\n\n  list lstflo[]�� ������. " << endl ;
    mybegin = chrono::system_clock::now();
    for (i = 0; i < M; ++i) {
         ftemp = insdata[i] ; // ������ ������
         if(i%100 == 0 ) cout << "  *";
         auto lit= lstflo.begin();
         for( lit= lstflo.begin(); lit != lstflo.end(); lit++){
            if( ftemp < *lit) break ; // �� ��ġ ����
         }
         lstflo.insert( lit, ftemp );
    }
    myend   = chrono::system_clock::now();
    sec = myend - mybegin;
    tsec = sec.count();
    cout << "\n>  list<float> random insert Time : "<< tsec << endl;

    cout << "\n  vector vecflo[]�� ã�Ƽ� ������. " << endl ;
    mybegin = chrono::system_clock::now();
    for (i = 0; i < M; ++i) {
         ftemp = insdata[i] ; // ������ ������
         if(i%100 == 0 ) cout << "  *";
         auto vit= vecflo.begin();
         for( vit= vecflo.begin(); vit != vecflo.end(); vit++){
            if( ftemp == *vit) break ; // ������ ��ġ
         }
         vecflo.erase( vit);
    }
    myend   = chrono::system_clock::now();
    sec = myend - mybegin;
    tsec = sec.count();
    cout << "\n ���� �� vecflo.size() = " << vecflo.size() ;
    cout << "\n>  vector<float> random find and erase( ) Time : "<< tsec << endl;

    cout << "\n\n  list lstflo[]���� ã�Ƽ� ������. " << endl ;
    mybegin = chrono::system_clock::now();
    for (i = 0; i < M; ++i) {
         ftemp = insdata[i] ; // ������ ������
         if(i%100 == 0 ) cout << "  *";
         auto lit= lstflo.begin();
         for( lit= lstflo.begin(); lit != lstflo.end(); lit++){
            if( ftemp == *lit) break ; // ������ ��ġ
         }
         lstflo.erase( lit );
    }
    myend   = chrono::system_clock::now();
    sec = myend - mybegin;
    tsec = sec.count();
    cout << "\n ���� �� lstflo.size() = " << lstflo.size() ;
    cout << "\n>  list<float> find and erase( ) Time : "<< tsec << endl;

	return 0;
} // end of main( )
