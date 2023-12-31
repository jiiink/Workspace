#include <iostream>
#include <vector>
#define  SKIP  cout << "-------------\n"
using namespace std ;

struct A {
    A() = default ;

    A( int ii, const string& ss ) : i(ii), str(ss) {
        cout << "  > �Ű������κ��� ��ü�� ����ϴ�. \n" ;   }

    A( const A& that ) : i(that.i), str(that.str) {
        cout << "  > ��ü�� �����մϵ���. \n" ;            }

    int i = 0 ;
    string str ;
};

int main () {
    vector<A> seq ;
    seq.reserve(10) ;

    A a ;

    seq.push_back(a) ;
    seq.insert( seq.end(), a ) ;
    seq.push_back( A( 12, "banana" ) ) ;
    seq.insert( seq.begin(), A( 15, "tomato" ) ) ;
    cout << "\n Size of seq[ ] " << seq.size() << endl ;

    // A�� instance�� �߰��������� �ٷ� ����� �ִ´�. insert( )�� reference�� �ʿ�������
    seq.emplace_back      ( 150, "mango" ) ;
    seq.emplace( seq.begin(), 63, "papaya" ) ;
    cout << "\n Size of seq[ ] " << seq.size() << endl ;

    for(auto w : seq){
            cout << "\n seq[ ]: " << w.i << "  " << w.str  ;

    }

}
