#include<bits/stdc++.h>
#define allout(msg,X) cout<<"\n\n"<<msg<<"\n";for(auto w:X) cout << w << " "
using namespace std;

// ��� 1. ���� ���� ���Ҹ� ����.
int main(){

    vector<int> v {23, 43, 11, 66, 76, 34};

    allout("���� vector v[]: ", v ) ;
    // v.pop_front( ) ; �̰��� �����ϴ�.
    // ���
    v.erase( v.begin() ) ;

    allout("pop_front( ) ���� vector v[]: ", v ) ;

    return 0;
}

