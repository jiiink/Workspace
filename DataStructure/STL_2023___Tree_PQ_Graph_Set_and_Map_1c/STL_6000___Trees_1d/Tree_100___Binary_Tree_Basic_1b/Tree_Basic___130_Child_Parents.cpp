#include <bits/stdc++.h>
using namespace std;

#define allout(MSG,X)   cout<<"\n"<<MSG<<"\n";for(auto w:X)cout<<w<<", "

vector<int> leaf_node( vector <int> T ) {
    // �Է� tree�� T �Դϴ�. �� T�� ��� leaf�� vector leaves<int>�� ��Ƽ� �����ּ���.
    vector<int> leaves ;

    leaves.push_back( 666) ;
    leaves.push_back( 555) ;  // �������� �� �κ��� ä���� �Ѵ�.
    return leaves ;
}

int main() {

    // �� Ʈ�� ���� 1���� N�����̸� �� ���� parents ������ ������ �ִ�.
    // �� ��� i�� �θ�� ptree[i], ���� ptree[1]������ ���� ��. -1�� root

    vector <int> ptree = { 10, 29, 33, 44, 510, 13, 80, \
                           73, 18, 62, 77,   4, 13, 59, 49, 98 } ;

    allout ("\n 1. Array�� ǥ�õ� Ʈ��", ptree) ;

    vector <int> myleaf ;
    myleaf = leaf_node( ptree ) ;
    allout("\n 2. Ʈ�� ptree�� ��� leaf nodes", myleaf) ;
    // �׸� gen_tree_01.png�� �����Ͻÿ�.

} // END OF MAIN( )

