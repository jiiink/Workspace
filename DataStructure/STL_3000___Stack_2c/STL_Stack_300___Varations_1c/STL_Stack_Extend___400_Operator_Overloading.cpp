// STL - �߻��� Stack�� �پ��� ������� �����ϱ� //
#include <bits/stdc++.h>
using namespace std;

bool operator==( stack<int> a , stack<int> b ) {
    cout << "In operator== " << a.top() << "  " << b.top() << endl;
    while( a.empty() && b.empty()){
         if ( a.top() != b.top() ) return ( false ) ;
         a.pop() ; b.pop() ;
    }
    return(false) ;
} // ���� �ʿ�. empty�϶����� ��� top( )��. �ѹ��̶� �ٸ��� return(false)

stack<int> operator+( stack<int> a, stack<int> b) {
    int tmp ;
    stack<int> tmp_stack, result = a;
    while(!b.empty()){
        tmp = b.top() ;
        tmp_stack.push(tmp);
        b.pop();
    }
    while(!tmp_stack.empty()){
        tmp = tmp_stack.top() ;
        result.push(tmp);
        tmp_stack.pop();
    }
    return ( result ) ;
}
stack<int> operator-(stack<int> a){ // ������(unary) ���̳ʽ� - , ������ ������
    stack<int> tstack;
    while(!a.empty()){
        tstack.push(a.top());
        a.pop();
    }
    return tstack;
}

ostream& operator<< (ostream& os, stack<int> a){ // ��� ������ ����
    while( !a.empty() ){
        os << a.top() << ' ';
        a.pop();
    }
    return os;
}

int main() {

    cout << "������ Overloading(��ø)�� ���ÿ� Ȱ���ϱ�." << endl;

    stack <int> s0, s1, s2 ;

    s0.push(45) ;  s0.push(23) ;  s0.push(99) ;  s0.push(3) ;
    s1.push(45) ;  s1.push( 5) ;  s1.push(1) ;

    cout << "s0.top()=" << s0.top() << endl;

    if ( s0 == s1 ) cout << "s1�� s2�� �����ϴ�. " ;
    else  cout << "s1�� s2�� �ٸ��ϴ�. " ;
    cout << "\nũ�⺯ȭ " << s0.size() << " " << s1.size() << " " << s2.size() ;

    s2 = s0 + s1 ;
    cout << "\n\n ���� ������ �ϰ� ���� ��� " ;
    cout << s0.top() << " " << s1.top() << " " << s2.top();
    cout << "\n\n ũ�⺯ȭ " << s0.size() << " " << s1.size() << " " << s2.size() << endl ;

    cout << "���� ���� ������" << endl;
    cout << "���� ���� : " << s2 << endl;
    cout << "���� ��¤�� ���� : " << -s2 << endl;

  return 0;
}
