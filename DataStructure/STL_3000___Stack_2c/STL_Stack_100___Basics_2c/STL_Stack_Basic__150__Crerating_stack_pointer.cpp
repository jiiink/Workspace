#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<"\n ";for(auto w:X)cout<<w<<"\n "

using namespace std ;
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

   stack <int> *mymy ;

   mymy = new stack <int> () ;

   mymy->push(100) ;
   mymy->push(200) ;
   mymy->push(500) ;
   mymy->push(-90) ;

   cout << *mymy ;
}

