// �����ڷᱸ���� �����Ѵ�.
// ���� 1.  stack�� ���� ���ҷ� �ϴ� 1���� vector ����� ,
// �� stack���� ������ vector�� ����� ����.
#include <bits/stdc++.h>
using namespace std;

typedef vector<int> intvec ;
typedef stack<int>  intstack ;

int main() {
     intvec  myvec ;
     intstack mystack ;
     stack <intvec>  VecStack ;     // ���Ұ� vector�� Stack
     stack <intstack> StackStack ;  // ���Ұ� Stack�� Stack
     vector <intstack>  StackVec ;  // ���Ұ� Stack�� Vector
     vector <intstack>::iterator iStackVec ;

     mystack.push(11) ; mystack.push(22) ; mystack.push(33) ;
     StackVec.push_back( mystack) ;  // �ϳ��� stack�� �ִ´�.
     // (11,22,33)

     mystack.push(211) ;  mystack.push(222) ;
     mystack.push(233) ;  mystack.push(-90) ;
     StackVec.push_back( mystack) ;  // �� �ϳ��� stack�� �ִ´�.
     //  [11,22,33 )
     //  [ 211, 222, 233, -90 )

     mystack.push(-100) ; mystack.push( -99) ;
     mystack.push( -98) ; mystack.push( -97) ;  mystack.push( -96) ;
     StackVec.push_back( mystack) ;  // ����° stack�� vector�� �ִ´�.
     //  [11,22,33 )
     //  [ 211, 222, 233, -90 )
     //  [ -100, -99, -98, -97, -96 )


     iStackVec = StackVec.begin() ;

     cout << iStackVec->top()  << "\n" ;    //  [11,22,33 )
     cout << (iStackVec+1)->top() << "\n" ;// [ 211, 222, 233, -90 )
     cout << (iStackVec+2)->top() << "\n" ; //[ -100, -99, -98, -97, -96 )


     iStackVec->pop() ; iStackVec->pop() ; (iStackVec+2)->pop() ;
     // [11,22  )
     // [ 211, 222, 233  )
     // [ -100, -99, -98, -97  )

     cout << "\n �� vector stack�� Top�� ������ �� top() �� \n " ;
     cout << iStackVec->top()  << "\n" ;
     cout << (iStackVec+1)->top() << "\n" ;
     cout << (iStackVec+2)->top() << "\n" ;


     return 0;
}
