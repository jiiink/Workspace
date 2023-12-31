// Stack�� ����ؼ�, n*n grid�� ��ǥ���� �Ҵ��Ͽ� ������(LEFT, RIGHT, UP, DOWN)
// ���ÿ� �츮�� ���� ���ο� ������ �ڷḦ �ִ� ���� �ǽ���

#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;

// ������ �����ε� �Լ�(��ø��Ű��), �ſ� �����ϰ� �߿��� ����Դϴ�.
// ���� ���� ������ ������ ���Ͽ� '+' �������� ���� �����ϴ� ���Դϴ�.

pair<int, int> operator+(const pair<int,int> & p1, const pair<int,int> & p2) {
   pair<int,int> ans(p1.first+p2.first, p1.second+p2.second);
   return ans;
}


void init_stack( stack<pair<int, int> >& st, int n) { // matrix ����
      pair <int, int> tmp;
      for (int i=1; i<=n; i++)
      {
          for (int j=1; j<= n; j++)
          {
              tmp = make_pair (i*i,j*j);
              st.push(tmp);
          }
      }
} // end of init_stack()

void stackPrint(stack<pair <int, int> > st) {// matrix ���
     while(!st.empty())
     {
         cout << st.top().first << " " << st.top().second << endl;
         st.pop();
     }
} // end of stackPrint

int main() {
     const pair<int,int> UP   ( 0,  1);
     const pair<int,int> LEFT (-1,  0);
     const pair<int,int> RIGHT( 1,  0);
     const pair<int,int> DOWN ( 0, -1);
           pair<int,int> xyPoint ;


     int n = 5; // grid n*n
     stack< pair<int, int> > mystack;
     init_stack(mystack, n);
     xyPoint = mystack.top() ;
     cout << "xyPoint Value = " << xyPoint.first \
          << " " << xyPoint.second << endl;
     cout << "\n Stack�� �ʱ� ũ�� = " << mystack.size() << "\n" ;

     cout << "mystack.top() is now " << mystack.top().first << " " << mystack.top().second << endl;
     xyPoint = mystack.top() + LEFT ;  // Overloading�� �߻�
     mystack.push( xyPoint ) ;
     xyPoint = mystack.top() + LEFT ;
     mystack.push( xyPoint ) ;
     xyPoint = mystack.top() + LEFT ;
     mystack.push( xyPoint ) ;
      cout << "\n Push�� Stack�� ũ��� " << mystack.size() << "\n" ;

     cout << "3���� ���� �߰��� ���� ��Ȳ. " << endl ;
     cout << "mystack.top() = " << mystack.top().first << " , " << mystack.top().second<< endl;
     mystack.pop() ;
     cout << "mystack.top() = " << mystack.top().first << " , " << mystack.top().second<< endl;
     cout << "Key�� �Է��ϰ� Return�� ġ�ÿ�. "  ;
     n = cin.get(); // ���ڷ� ��������. ���ڰ� �ƴ�
     cout << "Key Input =" << n ;

     return 0;
}
