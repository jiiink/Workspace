
#include <vector>
#include <iostream>
using namespace std;

int main () {

    vector<int> va {10, 20, 30, 40, 50 } ;
    vector<int> vb {50, 51, 52, 53, 54 } ;

    cout << "\n 1. va: " ;
    for(auto &w : va ) {  cout << ++w << " , " ; }  // Reference�� ���. �����δ� ���� ���Ҹ� ����ħ
    cout << "\n 2. va: " ;
    for(auto  r : va ) {  cout <<   r << " , " ; }

    cout << "\n 3. vb: " ;
    for(auto  w : vb ) {  cout << ++w << " , " ; }  // Value�� ���. ���� ���ҿ� ��ü�� �ٸ�
    cout << "\n 4. vb: " ;
    for(auto  r : vb ) {  cout <<   r << " , " ; }

  return 0;
}
