#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
#include <stdexcept>
#include <cstdio>
using namespace std;

#define dump(msg,X) cout<<msg;for(auto w:X) cout << w << " "


int main() {
 int i, num ;
 vector   <int>  v1,v2,v3 ;

 v1.push_back(71) ;
 v1.push_back(81) ;
 v1.push_back(91) ;
 v1.push_back(45) ;


 dump("\n v1�� ������ ��� �� ", v1 ) ;
 dump("\n v2�� ������ ��� �� ", v2 ) ;

 v2 = v1 ;  // vector ���� ���簡 �ȴ�. �� �� ��ȭ�� ���캸��
 v2.push_back(999) ;
 dump("\n �۾� �� v1�� ������ ��� ��: ", v1 ) ;
 dump("\n �۾� �� v2�� ������ ��� ��: ", v2 ) ;
} // END OF MAIN( )

