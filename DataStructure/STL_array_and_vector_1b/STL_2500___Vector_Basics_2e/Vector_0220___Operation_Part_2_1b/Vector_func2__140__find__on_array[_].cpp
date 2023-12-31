
#include <algorithm>  // find
#include <iostream>   // cout
#include <vector>     // vector
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;


int main() {

  int myints[] = {10, 20, 30, 40};
  int* p;

  p = find (myints, myints + 4, 30);
  if (p != myints + 4)
    cout << "\n ���Ұ� myints[]�� ���� : " << *p << '\n';
  else
    cout << "\n ���Ұ� myints[]�� ���粲 :";


  vector<int> myvector { 45, 33, 55, 11, 3, 55, 88, 99, 100, 17} ;
  vector<int>::iterator it;

  it = find(myvector.begin(), myvector.end(), 30);
  if (it != myvector.end())
    cout << "\n ���Ұ� myvector[]�� ���� : " << *it << '\n';
  else
    cout << "\n ���Ұ� myvector[]�� ���ٴϱ��: ";

  return 0;
}
