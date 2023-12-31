// stack�� iterator�� ����. container�� �ƴϱ� �����̴�.
// ��а����� stack�� ��� ������ �о ����غ��� ������
// �̰��� �Ұ��� �ϴ�. �ֳ��ϸ� stack�� push( ), pop( ), top( )�� �����ϱ�
// �����̴�.

#include <vector>
#include <stack>
#include <iostream>
using namespace std;

// vector�� << �����ڷ� cout�� �� �� �ְ� ����.
// cout << mystack ;

template <typename T>
ostream & operator<<(ostream & os, stack<T> my_stack) {
    //Call by value�� stack�� �޾ƿ� copy�ؼ� ����ϰ� ����.
    cout<< "\n Stack Top : " ;
    while(!my_stack.empty()) { //body
        os << "\n -- " << my_stack.top() ;
        my_stack.pop();
    }
    cout<< "\n Stack Bottom : " ;
    return os; // end of function
}



int main() {

    vector< int > myin { 34, 10, 19, 88, 70, 11, 5, 50} ;
    vector< int > NGE ;
    stack < int > mys ;

    for(auto& s: myin){  // reference�� �޾ƿ;߸� ������ ��� ��.
        mys.push(s) ;    // myin ���Ҹ� ��� stack mys�� ó ����.
        cout << " " << (&s - &myin[0]) ;  // ���� ���� ����, range-based for����
    }

    cout << "\n mys stack: " << mys;        // ��, ����� �ڵ� �ƴմϱ� ?
    cout << "\n mys.top()=" <<  mys.top( );

}
