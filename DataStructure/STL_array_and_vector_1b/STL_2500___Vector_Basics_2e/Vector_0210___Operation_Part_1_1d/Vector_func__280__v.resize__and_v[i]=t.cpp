#include <bits/stdc++.h>
using namespace std;
#define allout(MSG,X)   cout<<"\n"<<MSG <<" : ";for(auto w:X)cout<<w<<","

int main () {
    vector<int> myvector (10,-1); // 10���� ĭ�� ��� -1�� ����

    cout << "1. capacity of myvector: " << myvector.capacity() << '\n';
    cout << "1. size of  of myvector: " << myvector.size()    << '\n';
    cout << "1. myvector.front( ) : " << myvector.front()    << '\n';
    cout << "1. myvector.back()=: "     << myvector.back()    << '\n';

    myvector.resize(5);
    myvector[20] = 1000 ;  // ��� ���Ŀ� ���� ����  �����
    cout << "2. capacity of myvector: " << myvector.capacity() << '\n';
    cout << "2. size of  of myvector: " << myvector.size()    << '\n';
    cout << "2. myvector.back()=: "     << myvector.back()    << '\n';


    myvector.shrink_to_fit();
    cout << "\n shrink_to_fit()�� ������ \n " ;
    cout << "4. capacity of myvector: " << myvector.capacity() << '\n';
    cout << "4. size of  of myvector: " <<  myvector.size()   << '\n';

    return 0;
}
