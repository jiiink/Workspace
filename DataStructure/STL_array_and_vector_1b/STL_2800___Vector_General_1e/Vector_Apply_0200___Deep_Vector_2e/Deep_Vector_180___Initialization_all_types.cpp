#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;

// Compiler ���� �ݵ�� C++11 option���� �ؾ� �Ѵ�.

int main() {
 int i, num ;
 vector <char>      vowel =     { 'a', 'e', 'i', 'o', 'u' } ;
 vector <string>    Monthname = { "Jan", "Feb", "March", "Dec", "X-mas" }  ;
 vector <float>     fvec(15) ;
 vector <int>       ivec        { 34,23, 99, -100, 1,3,55 };
 int                arr[]       { 1,2,3,4,5 };
 set    <int>       myset       { 1,2,3,4,5 };
 map    <int,string> mymap      { {0,"zero"}, {1,"one"}, {2,"two"} };


allout(" Month name= ", Monthname ) ;
allout(" ���� ����= ",  vowel ) ;
allout(" fvec = ",      fvec ) ;
allout(" ivec = ",      ivec ) ;
allout(" set = ",       myset ) ;


} // END OF MAIN( )

