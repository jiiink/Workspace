#include <bits/stdc++.h>
using namespace std;

#define allout(MSG,X)   std::cout<<"\n"<<MSG<<" ";for(auto w:X)std::cout<<w<<", "

int main() {

	list<int> mylist ( { 2, 8, 7, 5, 3, 1, 4 }); // List �ʱ�ȭ�� Ư���ϴ�.
    allout("ó�� ��Ȳ : ", mylist) ;

	initializer_list<string> initLits = { "Hi", "this", "is", "sample" };
	list <string> Slist2 = { "����ȭ", "����", "�Ǿ����ϱ�", "�Ǿ������?" };

	list<string> yourlist (initLits); // initializer_list �̿���

    allout("�ι�° ��Ȳ : ", yourlist) ;
    allout("Slist2 = : "   , Slist2) ;
	return 0;
}

