#include <iostream>
#include <chrono>
#include <iomanip>

using namespace std;

void Looping(long k){

    double d1 = 3451.130, d2= 6782.01+ (double)k ;
        for(long i= 0 ; i < k ; i++){
            d1 += 123.3 + d2 ;
            d2 = d1 - d1/d2 ;
        }
    return ;
}


int main() {// ���� nano second ������ �����δ� OS�� �Ѱ踦 ���� �� ����.

    int steps = 50;
    long iters = 5000000 ; // 500����

    for(int i=0 ; i< steps ; i++ ) {
        auto tstart = chrono::high_resolution_clock::now();
             Looping( i*iters) ;
        auto tend   = chrono::high_resolution_clock::now();
        cout << "\n Step:"<< setw(4) << i << "  : Timing " << (tend - tstart).count() << endl;
    }

    return 0;

}

