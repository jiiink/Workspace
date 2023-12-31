#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
#include <stdexcept>
#include <cstdio>
#include <set>
#include <map>
using namespace std;

/*
C++11������ auto ��� Ű���尡 �߰��� �Ǿ����ϴ�.
�׷��� auto Ű������ ������ begin(), end(), rbegin(), rend() �δ�
const_iterator Ÿ���� ���� �� ���ٴ� ���Դϴ�.
begin()���� ������ Ÿ�� �߷п� ���ؼ� iterator Ÿ������ �ް� �˴ϴ�.
�̷� ������ cbegin()�� cend(), crbegin(), crend()�� ���Ӱ� �߰��Ǿ����ϴ�.
��� �ݺ��ڶ�� �ǹ̷� �տ� c�� �پ����ϴ�.
�̷��� �Ǹ� �ݺ��ڰ� ����Ű�� ���� ���� ������ �� �����ϴ�.
*/


int main() {
 int i, num ;

       vector <int>         vec { 34, 35, 36, 37, 38, 39, 40 };
 const vector <int>    const_vec { 234, 335, 436, 537, 638, -740 };
       vector <int>:: iterator ivec ;


       ivec =  vec.begin(); // variable iterator
       cout << "Test 1: " << *(ivec) << "  " << *(ivec+1) << endl  ;
       cout << "Test 2: " << *const_vec.cbegin() << endl;         // constant iterator

       vec.push_back(-999);
       cout << "Test 3: " << *(vec.end()-1) << endl ;

       //const_vec.push_back(-777); // �̷��� �ϸ� ������ ����.
       //cout << "Test 4: " << *(const_vec.end()-1) << endl ;


  return 0 ;

} // end of main()

