#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define allout(MSG,X)   cout<<"\n"<<MSG <<" : ";for(auto w:X)cout<<w<<","


// shrink_to_fit() ; capacity()�� size�� ���ߴ� �۾�,

int main () {
    vector<int> myvector (50,-1);

    cout << "1. capacity of myvector: " << myvector.capacity() << '\n';
    cout << "1. size of  of myvector: " << myvector.size()     << '\n';

    myvector.resize(10);
    cout << "\n After  myvector.resize(20); " << '\n';
    cout << "2. capacity of myvector: " << myvector.capacity() << '\n';
    cout << "2. size of  of myvector: " << myvector.size()     << '\n';
    myvector[30] = 9988 ;

    cout << "\n After  myvector[30] = 1000 " << '\n';
    cout << "3. capacity of myvector: " << myvector.capacity() << '\n';
    cout << "3. size of  of myvector: " << myvector.size()     << '\n';
    cout << "3. myvector.front() : " <<  myvector.front()      << '\n';
    cout << "3. myvector.back()  : " <<  myvector.back()       << '\n';
    cout << "3. myvector[30]     : " <<  myvector[30]          << '\n';
    allout("���� myvector[]= ", myvector ) ;

    myvector.shrink_to_fit();
    cout << "\n\n shrink_to_fit()�� ������\n\n" ;
    cout << "4. capacity of myvector: " << myvector.capacity() << '\n';
    cout << "4. size of  of myvector: " <<  myvector.size()   << '\n';
    cout << "4. myvector[30]     : " <<  myvector[30]          << '\n';

    return 0;
}
