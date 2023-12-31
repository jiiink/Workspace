
#include <chrono>
#include <iostream>
#include <cmath>

using namespace std ;
using namespace chrono ;

#define UCK_1  200000000


void Test() {
    double qd = 0.0;
    for ( long i = 0; i < UCK_1 ; ++i ) {
       // qd =  (double)i + 123.456L ;
       qd +=  sqrt( (double)i + 123.456L );
    }
}

int main() {

    system_clock::time_point StartTime = system_clock::now();

    Test();

    system_clock::time_point EndTime = system_clock::now();


    duration <double> DefaultSec = EndTime - StartTime;

    nanoseconds nano    = EndTime - StartTime;
    microseconds micro  = duration_cast<microseconds> (EndTime - StartTime);
    milliseconds mill	= duration_cast<milliseconds> (EndTime - StartTime);
    seconds sec		    = duration_cast<seconds>      (EndTime - StartTime);
    minutes mins	    = duration_cast<minutes>      (EndTime - StartTime);
    hours hour			= duration_cast<hours>        (EndTime - StartTime);


    cout << "Test() ���� �ð� : " << DefaultSec.count() << " DefaultSec."   << endl;
    cout << "Test() ���� �ð� : " << nano.count ()      << " nanoseconds"   << endl;
    cout << "Test() ���� �ð� : " << micro.count()      << " microseconds"  << endl;
    cout << "Test() ���� �ð� : " << mill.count ()      << " milliseconds"  << endl;
    cout << "Test() ���� �ð� : " << sec.count  ()      << " seconds"       << endl;
    cout << "Test() ���� �ð� : " << mins.count ()      << " minutes"       << endl;
    cout << "Test() ���� �ð� : " << hour.count ()      << " hour"          << endl;

    return 0;
}


