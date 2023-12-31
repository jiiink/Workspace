
#include<bits/stdc++.h>
#define MAX 1000
using namespace std;

template <typename T>
void dump_stack(std::stack<T>& stack) {
  std::cout <<"\n" ;
  std::stack<T> temp;
  if ( stack.empty() ) cout << "��.. ����ִ� stack!" ;
  while (!stack.empty()) {
    T top = stack.top(); stack.pop();
    std::cout << top << " ";
    temp.push(top);
  }
  /* �������� ����. �̾Ƴ� ��� ����.
  while (!temp.empty()) {
    T top = temp.top(); temp.pop();
    stack.push(top);
  }
  */
}

template <typename T>
void dump_stack2(std::stack<T> mystack) {
  std::cout <<"\n" ;
  if ( mystack.empty() ) cout << "��.. ����ִ� stack!" ;
  while (!mystack.empty()) {
    T top = mystack.top();
    mystack.pop();
    std::cout << top << " ";
  }
}



int main() {
    stack<int> sint;
    stack<string> sstr ;
    sint.push(10); sint.push(20);
    sint.push(30); sint.push(55); sint.push(-7);
    dump_stack(sint) ;
    dump_stack(sint) ;
    dump_stack(sint) ;


    sstr.push("��"); sstr.push("��"); sstr.push("��");
    sstr.push("��"); sstr.push("��"); sstr.push("��");
    dump_stack2(sstr) ;
    dump_stack2(sstr) ;



    return 0;
}  // end of main( )
