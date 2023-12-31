#include <bits/stdc++.h>
#include <chrono>

using namespace std;
using namespace chrono;

using in_secs = duration<double>;

#define N 1000000

double Rnum[N] ; // 100������ C-style �迭

int main() {

    system_clock time;
    in_secs diff_time;

    system_clock::time_point tbegin, tend ;

    tbegin = time.now();
        for(int i= 1 ; i < N ; i++){
            Rnum[i] = (double) rand()/ N ;
        }
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "\n 100�� Rnum[i]=rand( ) �ð� = " << diff_time.count() << endl;

    tbegin = time.now();
        for(int i= 1 ; i < N ; i++){
            Rnum[i] += 0.1  ;
        }
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "\n 100�� Rnum[i] += 0.1  �ð� = " << diff_time.count() << endl;

    tbegin = time.now();
        for(int i= 1 ; i < N ; i++){
           for(int j=1 ; j < 100 ; j++ ) Rnum[j] += 0.1  ;
        }
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "\n 100�� ���� Loop Rnum[j] += 0.1  �ð� = " << diff_time.count() << endl;





} // end of main( )
