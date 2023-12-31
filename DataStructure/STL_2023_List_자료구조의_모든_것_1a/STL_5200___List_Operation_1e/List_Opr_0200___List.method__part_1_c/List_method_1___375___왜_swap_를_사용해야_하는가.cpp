
#include <bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace chrono;

using in_secs = duration<double>;


int main() {
    system_clock time;
    in_secs diff_time;
    int N = 10000000 ;  // 1000������ ����

    // ������ �غ��ϱ� ------------
    list<int>  la, lb, lc,ld ;
    for(int i ; i < N ; i++) {
            la.push_back(i) ;
            lb.push_back(i+1) ;
    }


    // A �ð�����
    auto tbegin = time.now();
        lc = la  ;  // list�� object�� copy�ϱ�
        la = lb  ;
        lb = lc  ;
    auto tend = time.now();
    diff_time = tend - tbegin;
    cout << "\n lc = la Time : " << diff_time.count() << endl;


    // B �ð�����
    tbegin = time.now();
        la.swap( lb ) ;
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "\n la.swap( lb ) Time : " << diff_time.count() << endl;

    return 0;

} // end of main()
