#include<bits/stdc++.h>
#define allout(msg,X) cout<<"\n\n"<<msg<<"\n";for(auto w:X) cout << w << " "
using namespace std;

// ��� 7. generic remove( )�� ���� ������ ã�Ƽ� �����
// �� �����ؾ� �� ������ �� �۾��� ���� ���Ҹ� ����� ���� �ƴ϶�.
// ���� ������ ��ġ�� �ű�� �� �� ������ RETURN�Ѵٴ� ���̴�.

bool mycut(int v){
    return( v == 33 ) ;
}

int main(){

    vector<int> v { 23, 33, 27, 31, 33, 35, 33, 41, 55};

    allout("���� vector v[]: ", v ) ;

    auto mb = v.begin() ;
    auto me = v.end( ) ;
    auto mit = remove_if( v.begin(), v.end( ), mycut ) ;


    allout("remove_if( ) ���� vector v[]: ", v ) ;
    cout << "\n *mit= " << *mit ;
    cout << "\n mit-mb+1= " << mit-mb+1 ;
    cout << "\n remove_if( ) ������ ������ ����غ���, \n" ;
    for(auto it= mb ; it <= mit-1; it++){
        cout <<" " << *it ;
    }

    return 0;
}

