#include <iostream>
#include <cassert>
#include <deque>
#include <vector>
#include <queue>
#include <string.h>
#include <algorithm>  // For find
using namespace std;


int main() {
  string myword ;
  vector<char> moum = {'a', 'e', 'i', 'o', 'u'} ;
  queue <char> Conso, Vowel ;


  cout << "���ڿ����� ������ �������� �и��ϱ� " << endl;
  myword = "computerlanguage" ;

  for(auto w: myword ){
    cout << "\n char = " << w ;
    if ( find( moum.begin(), moum.end(), w) != moum.end() )
             cout << " ����" ;
    else
             cout << " ����" ;
  }



  return 0;
}
