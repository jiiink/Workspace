#include <bits/stdc++.h>
#include <chrono>
#define  N   1000000
#define  M   1000
using namespace std;
using namespace chrono;


using in_secs = duration<double,milli>;
vector<int>    myvec ;
list  <int>    mylist ;
array <int,N>  myarray ; // ū array�� global�� �����ؾ� ��. �ȱ׷��� ������. ...
deque <int>    mydeq ;

void set_data() {
    for(int i=0 ; i < N ; i++){
        myvec.push_back(i);
        myarray[i]= i;
        mylist.push_back(i) ;
        mydeq.push_back(i);
    }
} // data �غ��ϱ�


int main() {
    system_clock time;
    in_secs diff_time;
    system_clock::time_point tbegin, tend ;


    set_data() ;

    tbegin = time.now();
      for(int i=1; i<= 10 ; ++i)  {
           for( auto &w : myvec ) w = w + 1 ;
       }
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "\n Time for 10�� scanning( myvec ) " << diff_time.count() << endl;


    tbegin = time.now();
      for(int i=1; i<= 10 ; ++i)  {
           for( auto &w : mylist ) w = w + 3 ;
           //cout << "\n " << i << " mylist.front( ) = " << mylist.front( ) ;
       }
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "\n Time for 10�� scanning( mylist ) " << diff_time.count() << endl;

    tbegin = time.now();
      for(int i=1; i<= 10 ; ++i)  {
           for( auto &w : myarray ) w = w + 4 ;
           //cout << "\n " << i << " myarray.front( ) = " << myarray.front( ) ;
       }
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "\n Time for 10�� scanning( myarray ) " << diff_time.count() << endl;


    tbegin = time.now();
      for(int i=1; i<= 10 ; ++i)  {
           for( auto &w : mydeq ) w = w + 4 ;
           //cout << "\n " << i << " mydeq.front( ) = " << mydeq.front( ) ;
       }
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "\n Time for 10�� scanning( mydeque ) " << diff_time.count() << endl;
    return 0;

} // end of main()
