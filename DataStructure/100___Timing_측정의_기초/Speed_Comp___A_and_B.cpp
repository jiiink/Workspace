
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

    // ������ �غ��ϱ� --------- 100���� ũ���� vector�� ������(reversing) ---------
    vector<int>  list myvec ;



    for(int i=1; i<= N ; ++i) myvec.push_back(i);
    // A �ð�����
    auto tbegin = time.now();
      for(int i=1; i<= 10 ; ++i)  {
           reverse( myvec.begin(), myvec.end() ) ; // 10�� ������
           //cout << "\n " << i << " myvec.front( ) = " << myvec.front( ) ;
       }
    auto tend = time.now();
    diff_time = tend - tbegin;
    cout << "\n A Time : " << diff_time.count() << endl;

    // B �غ��ϱ� --------- 100���� ũ���� vector�� ������(reversing) ---------
    vector<int>  myvec ;
    for(int i=1; i<= N ; ++i) myvec.push_back(i);
    // B �ð�����
    auto tbegin = time.now();
      for(int i=1; i<= 10 ; ++i)  {
           reverse( myvec.begin(), myvec.end() ) ; // 10�� ������
           //cout << "\n " << i << " myvec.front( ) = " << myvec.front( ) ;
       }
    auto tend = time.now();
    diff_time = tend - tbegin;
    cout << "\n A Time : " << diff_time.count() << endl;

    return 0;

} // end of main()
