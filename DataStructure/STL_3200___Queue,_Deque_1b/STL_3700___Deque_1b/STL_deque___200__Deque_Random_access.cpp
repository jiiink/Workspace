#include <bits/stdc++.h>
using namespace std;


template <typename Container>
Container make(const char s[]) {
  return Container(&s[0], &s[strlen(s)]);
}  // ���ڿ��� �� ���ھ� �߶� �迭�� ������ִ� �Լ�


int main() {

  deque <char> mydeque ;
  cout << "Deque���� Find ����ϱ� " << endl;

  mydeque =  make< deque<char> >("Computer Science!");

  // Search for the first occurrence of the letter e:
  deque<char>::iterator where = find(mydeque.begin(), mydeque.end(), 'e');

  cout << "\n *(where+1) ���� ����ϱ�= " << *(where+1) ;
  cout << "\n *(where+3) ���� ����ϱ�= " << *(where+3) ;
  cout << "\n   where[2] ���� ����ϱ�= " << where[2] ;
  cout << "\n *(mydeque.end()-5) ���� ����ϱ�= " << *(mydeque.end()-5) ;
  return 0;
}
