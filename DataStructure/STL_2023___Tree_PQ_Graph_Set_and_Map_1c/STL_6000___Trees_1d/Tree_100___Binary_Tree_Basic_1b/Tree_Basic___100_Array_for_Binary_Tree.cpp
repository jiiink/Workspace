#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<"\n";for(auto w:X)cout<<w<<", "
using namespace std;


// �������� �� �κ��� ä���� �մϴ�.
int tree_depth( vector<string> T) {
     int     depth ;
     depth = 100 ;
     return( depth) ;
}

int main() {
    int num ;
    vector <string> atree = {  "Zerg", "apple", "book", "coke", "red", "Cat", "Beer", "GO", "0", "TV", \
                               "Radio", "0", "Music", "0",   "0",    "0",   "0", "0", "0", "0", \
                                "0",     "0",  "0",   "0",   "0",    "0",   "0", "0"} ;
    allout("Array�� ǥ�õ� Ʈ��", atree) ;

    // Ʈ���� root�� atree[0]�� ����Ǿ� ����.
    cout << "\n Type a node number:" ;
    cin >> num ;
    cout << "\n Two Children of node " << num << " are \n { " ;
    cout << atree[2*num+1] << " and " << atree[2*num+2]  << " } \n\n" ;

    num = tree_depth( atree) ;
    cout << "\n atree�� Depth =" << num ;

} // END OF MAIN( )