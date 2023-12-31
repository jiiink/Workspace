/*
�����̳ʸ� �޾� back_insert_iterator Ÿ���� ��ü�� �����Ͽ� ��ȯ�Ѵ�.
back_insert_iterator Ÿ���� ������ �ݺ��� Ŭ������,
push_back �Լ�ó�� �����̳��� ���� ���� ������ �� �� �ֵ��� �����ش�.
�ش� Ÿ���� ��Ҹ� ���� �Ǵ� �̵��� �������� ����Ű�� �ݺ��ڷ� ����ϸ� ����.

���� ��� ���������� '=' ������ ����Ͽ� �������� ��Ҹ� �����ϴ�
std::copy �Ǵ� std::transform�� ���� �Լ��� ����� ���
�����̳��� �ܿ� ������ �Ű� ����� �ϴ� �������� �ִ�.
�� copy�� output ���ڷ� back_insert_iterator Ÿ���� �ƴ�
�⺻ �ݺ���(begin, end)�� ����Ѵٸ�
�ܿ� ������ ���ġ ���� ��� ��Ÿ�� ������ ���ϴ�.
������ back_insert_iterator Ÿ���� ��ü�� '=' ������ ���� ��ҿ� ���� �����ϴ���
���������� push_back�� ȣ���ϵ��� ���� �ε��Ǿ� �ִ�.

���� ���� ������ ���α׷��Ӱ� �Ű� �� �ʿ䰡 �����ϴ�.

*/

#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG<<" ";for(auto w:X)std::cout<<w<<", "
using namespace std ;

int main() {
   string s = "Busan Galmegi";

   list<char> chars;
   copy(s.begin(), s.end(), back_inserter(chars));
   allout(" chars{}= ", chars ) ;


   vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   fill_n( back_inserter(v), 3, -1);
   allout(" v{}= ", v ) ;

   return 0;
}
