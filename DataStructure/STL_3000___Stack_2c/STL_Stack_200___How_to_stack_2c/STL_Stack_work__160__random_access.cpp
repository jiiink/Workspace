#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;

stack  <string> stk1 ;
vector <string> vec1 ;
string  mystr, yourstr ; // ���ڿ��� �ٷ�� ���� ����, �ݵ�� include

void set_init() ;

// ������stack[i]��° ������ ���� ã�ƿ´�. �� stack�� ���� ������ �ʾƾ� �Ѵ�.

string get_stack( int i ){
     return("None") ;
}

int main () {

    set_init( ) ;

    cout << "\n vec1[0]=" << vec1[0]  ;
    cout << "\n vec1[2]=" << vec1[2]  ;
    vec1[2] = "Red Wine" ;
    cout << "\n vec1[2]=" << vec1[2]  ;

    cout << "\n ������ �������ϴ�." ;
    return(0) ;

    // �Ʒ� ������ �� �ȵɱ�� ? �����ϸ� � ������ ����� ?
    // �ݵ�� ������ Ȯ���Ͻñ� �ٶ��ϴ�.
    // cout << stk1[0] ;
    // stk1[1] = "���ɸ�" ;

 } // end of main() �׻� �ݴ� ��ȣ���� �̷� ǥ�ø� �ؾ� �����ϴ�.

void set_init( ) {
    stk1.push( "banana") ;
    stk1.push( "beer"  ) ;
    stk1.push( "soju"  ) ;

    vec1.push_back( "banana") ;
    vec1.push_back( "beer"  ) ;
    vec1.push_back( "soju"  ) ;
 }
