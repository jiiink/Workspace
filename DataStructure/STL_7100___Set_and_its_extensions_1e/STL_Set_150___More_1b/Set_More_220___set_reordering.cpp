#include <iostream>
#include <set>
#include <functional>
using namespace std;

#define allout(MSG,X)   cout<<"\n"<<MSG<<"=> ";for(auto w:X)cout<<w<<", "

int main() {

    int a[] = {7, 4, 9, 1, 3, 8, 2, 5, 6, 10};
    set<int, greater<int>> s1(a, a+10);
    allout( "����1 : s1 --> ",  s1 ) ;


    cout << "\n ���տ� ���� ������ ������ :\n";
    set<int, greater<int>>::iterator p = s1.begin();
    while (p != s1.end()) cout  << *p++ << " ";
     allout( "����2 : ���� �� s1 --> ",  s1 ) ;
}
