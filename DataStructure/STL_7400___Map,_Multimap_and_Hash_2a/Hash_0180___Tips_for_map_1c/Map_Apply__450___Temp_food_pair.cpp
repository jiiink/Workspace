#include <bits/stdc++.h>
using namespace std;


int main () {

    map <float, string> tfood= { \
         { -5.5, "Vodka"},\
         {  6.0, "White Wine"}, \
         { 67.8, "Coffee"}, { 45.345, "���ȱ�"} } ;

    float good ;

    good = -5.5 ;
    printf("\n %f��  ���� ������ %s", good, tfood[good].c_str() ) ; // it works
    good = 100.0 ;

    printf("\n %f��  ���� ������ %s", good, tfood[good].c_str() ) ; // it works
  return 0;
}
