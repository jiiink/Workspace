// List.find( ) �� ���� �Լ��� �������� �ʴ´�.

#include <bits/stdc++.h>
using namespace std;

int main(){
    string mystr = "PUSAN_SUMMER" ;
    list<char> mylist ( mystr.begin(), mystr.end() );

    auto it1 = find( mylist.begin(), mylist.end(), 'S') ;
    auto it2 = find( mylist.begin(), mylist.end(), 'M') ;

    cout << distance(it1, it2 ) ;


    return 0;
}
