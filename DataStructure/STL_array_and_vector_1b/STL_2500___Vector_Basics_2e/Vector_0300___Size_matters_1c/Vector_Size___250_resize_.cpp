
#include <bits/stdc++.h>
using namespace std ;
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "

int main () {

    vector<int> myvector;

    for (int i=1; i<10; i++) myvector.push_back(i);

    myvector.resize(5);  // 10���� 5���� �پ���. ���� ù 5���� ���� �ȴ�.
    cout << "\n 1.  size and capacity: " << myvector.size() << "  " << myvector.capacity() ;
    myvector.resize(50, 2019 );
    cout << "\n 2.  size and capacity: " << myvector.size() << "  " << myvector.capacity() ;
    myvector.resize(12);
    cout << "\n 3.  size and capacity: " << myvector.size() << "  " << myvector.capacity() ;

    allout("myvector[]= ", myvector ) ;

    return 0;
}
