#include<bits/stdc++.h>
#define allout(msg,X) cout<<"\n\n"<<msg<<"\n";for(auto w:X) cout << w << " "
using namespace std;

// ��� 4. ��� �����

int main(){

    vector<int> v {23, 43, 11, 45, 76, 34, 45, 11, -3, 100}; // 45�� �ߺ�

    allout("���� vector v[]: ", v ) ;

    auto it = find( v.begin(), v.end(), 45 ) ;

    v.erase( it ) ;

    allout("v[]���� 45�� ������ �� vector v[]: ", v ) ;

    return 0;
}

