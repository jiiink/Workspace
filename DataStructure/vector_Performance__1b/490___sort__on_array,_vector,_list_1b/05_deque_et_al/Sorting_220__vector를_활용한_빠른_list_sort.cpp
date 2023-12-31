#include <bits/stdc++.h>
#include <chrono>

using namespace std;
using namespace chrono;


int simhash2(unsigned int x, int M) {
    if( x < 0 ) return(-1) ;
    x = ((x >> 16) ^ x) * 0x45d9f3b;
    x = ((x >> 16) ^ x) * 0x45d9f3b;
    x = (x >> 16) ^ x;
    return x%M;
}


int main() {
    system_clock time;
    duration<double,milli> diff_time;
    int N = 100000 ;

    list<int> list1, list2 ;
    vector<int> vec1 ;

   int val ;
    auto tbegin = time.now();
        for(int i=0; i< N ; ++i) {
            val =  simhash2(i, 100000) ;
            list1.push_back( val ) ;
            list2.push_back( val ) ;
        }
    auto tend = time.now();
    diff_time = tend - tbegin;
    cout << "Number of Steps = " << N << endl ;
    cout << "�غ� �ð� : " << diff_time.count() << endl;

    // ����Ʈ�� ������ sort( ) �ϱ�
    // ��� 1. �ϴ� list�� vector�� ��� �ű� vector�� �����ϱ�..
    //          �� ���� �ش� vector�� sort( ) ��.
    //          �ٽ� �̰��� ���� ����Ʈ�� �ű�.
    tbegin = time.now();
      // �̰� �ȵ�.      sort( list1.begin(), list1.end()) ;
      for(auto w : list1) vec1.push_back(w) ;
      sort( vec1.begin(), vec1.end() ) ;
      list1.clear() ;
      copy( vec1.begin(), vec1.end(), back_inserter( list1 ) ) ;
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "Time for list1 ���� (��� 1)  : " << diff_time.count() << endl;

    tbegin = time.now();
            list2.sort( ) ;
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "Time for list1 ���� (��� 2)  : " << diff_time.count() << endl;

    return 0;

} // end of main()
