#include<bits/stdc++.h>
#define allout(msg,X) cout<<"\n\n"<<msg<<"\n";for(auto w:X) cout << w << " "
using namespace std;

// ��� 8. generic remove( )�� ���� ������ ã�Ƽ� �����

int main(){

    vector<int> v {23, 45, 11, 66, 45, 34, 45, 11, -3, 100};

    allout("���� vector v[]: ", v ) ;

    remove(v.begin(), v.end( ), 45 ) ;

    allout(" Generic remove( ) ���� vector v[]: ", v ) ;

    return 0;
}

