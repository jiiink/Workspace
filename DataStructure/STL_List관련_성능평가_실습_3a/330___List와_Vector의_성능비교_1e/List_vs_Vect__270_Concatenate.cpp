#include <bits/stdc++.h>
#include <chrono>

using namespace std;
using namespace chrono;

using in_secs = duration<double,milli>;

#define  N 1000000  // ��ʸ���

// ����ð� ���ϱ�
vector<int        >  myvec1, myvec2 ;
list  <int        >  mylist, tolist ;

// list, vector���� ��ü�� 3��� �� �ڿ� ��� �丷�� ��� �����Ѵ�.

void set_data(){
    for(int i=0; i<= N ; ++i) {
            myvec1.push_back(i);
            myvec2.push_back(i+100) ;
            mylist.push_back(i);
            tolist.push_back(i+100);
    }
}

int main() {
    system_clock time;
    in_secs diff_time;
    chrono::system_clock::time_point tbegin, tend ;


    set_data() ;

    tbegin = time.now();
    for(int i=0; i<= N-1 ; ++i)  {
            myvec1.push_back( myvec2[i] );
    }
    myvec2.clear( ) ;  // �����.
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "\n myvec1 = myvec1 + myvec2 ; \n �ϳ��� �ű�� �ð�= "<< diff_time.count() << endl;

    tbegin = time.now();
          mylist.splice( mylist.end(), tolist );
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "\n mylist.splice( mylist.end(), tolist ); �ð�= "<< diff_time.count() << endl;

} // end of main()
