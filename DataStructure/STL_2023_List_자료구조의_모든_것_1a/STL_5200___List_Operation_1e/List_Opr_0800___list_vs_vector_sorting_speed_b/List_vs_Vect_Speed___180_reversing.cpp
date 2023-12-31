
#include <bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace chrono;

using in_secs = duration<double>;

// ����ð� ���ϱ�
array <int,1000000>  myarray ;  // ũ�� ������ �� �� ���� Global

int main() {
    system_clock time;
    in_secs diff_time;
    int N = 1000000 ;

    // --------- 100���� ũ���� vector�� ������(reversing) ---------
    vector<int>  myvec ;
    for(int i=1; i<= N ; ++i) myvec.push_back(i);
    auto tbegin = time.now();
      for(int i=1; i<= 10 ; ++i)  {
           reverse( myvec.begin(), myvec.end() ) ; // 10�� ������
           //cout << "\n " << i << " myvec.front( ) = " << myvec.front( ) ;
       }
    auto tend = time.now();
    diff_time = tend - tbegin;
    cout << "\n Time for 10�� reverse( myvec ) : " << diff_time.count() << endl;

    // --------- 100���� ũ���� list�� ������(reversing) ---------
    list<int>  mylist ;
    for(int i=1; i<= N ; ++i) mylist.push_back(i+1);
    tbegin = time.now();
      for(int i=1; i<= 10 ; ++i)  {
           reverse( mylist.begin(), mylist.end() ) ; // 10�� ������
           //cout << "\n " << i << " mylist.front( ) = " << mylist.front( ) ;
       }
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "\n Time for 10�� reverse( mylist ): " << diff_time.count() << endl;

    // --------- 100���� ũ���� array�� ������(reversing) ---------

    for(int i=1; i<= N ; ++i) myarray[i-1]= i+2 ;

    tbegin = time.now();
      for(int i=1; i<= 10 ; ++i)  {
           reverse( myarray.begin(), myarray.end() ) ; // 10�� ������
           //cout << "\n " << i << " myarray.front( ) = " << myarray[0] ;
       }
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "\n Time for 10�� reverse( myarray): " << diff_time.count() << endl;


    // --------- 100���� ũ���� deque�� ������(reversing) ---------
    deque<int>  mydeque ;
    for(int i=1; i<= N ; ++i) mydeque.push_back(i+3);
    tbegin = time.now();
      for(int i=1; i<= 10 ; ++i)  {
           reverse( mydeque.begin(), mydeque.end() ) ; // 10�� ������
           //cout << "\n " << i << " mydeque.front( ) = " << mydeque.front( ) ;
       }
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "\n Time for 10�� reverse( mydeque): " << diff_time.count() << endl;
    return 0;

} // end of main()
