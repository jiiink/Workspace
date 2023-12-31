#include<bits/stdc++.h>
using namespace std;

bool myfunction ( string i, string j) {
  return ( (i+"*")==(j)) ;  // 1 ���̳��� ���ӿ���
}


int main() {

  cout << "Deque���� adjacent_find( ) Ȱ���ϱ� \n"  << endl;
  deque<string> player(20);
  deque<string>::iterator i;

  // Initialize the deque:
  player[0] = "Pele";
  player[1] = "Platini";
  player[2] = "Maradona";
  player[3] = "Maradona";
  player[4] = "Rossi";
  player[5] = "Alexander";
  player[6] = "Maradona";
  player[7] = "Maradona*";
  player[8] = "Alexander";

  // Find the first pair of equal consecutive names:
  i = adjacent_find(player.begin(), player.end());
  cout << "\n ��� 1 " << *(i) ;
  cout << "\n ��� 2 " << *(i+1) ;


  cout << "\n\n ������ ���ڿ����� * �ϳ��� ���̳� �� " ;
  i = adjacent_find(player.begin(), player.end(), myfunction);
  cout << "\n ��� 1 " << *(i) ;
  cout << "\n ��� 2 " << *(i+1) ;




  // Find the first name that is lexicographically
  // greater than the following name:
  cout << "\n\n ���ο� ���� greater<string>()���� sorting�� ���� " ;
  i = adjacent_find(player.begin(), player.end(), greater<string>());

  cout << "\n ��� 4 " << *(i) ;
  cout << "\n ��� 5 " << *(i+1) ;

  return 0;
}
