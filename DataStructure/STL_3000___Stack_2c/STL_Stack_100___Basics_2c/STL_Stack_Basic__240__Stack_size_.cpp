#include <bits/stdc++.h>
using namespace std;


int main () {
    stack <string> cards;

    cards.push("��Ż����");  /* push() will add a value, think of queues */
    cards.push("���̴�ī");  /* adding some cards to the deck */
    cards.push("���ٺ����");
    cards.push("ũ�ξ�Ƽ��");
    cards.push("�ѱ�");

    cout << "\n ���� ���ÿ� �ִ� ���� �� = " << cards.size() ;
    cout << "\n Top of the deck = " << cards.top() ;

    cout << "\n Top�� �ִ� ���Ҹ� �̾� ���ϴ�. \n" ;
    cards.pop(); // top�� �ִ� ī�带 �ϳ� �̾Ƴ� ��!!!! �Ҹ��� �鸳�ϱ� ?
    cout << "\n ���� Top�� �ִ� ���� =" << cards.top() ;
    cout << "\n ���� Stack�� ������ ���� = " << cards.size();

    cout << "\n\n Top�� �ִ� ���Ҹ� �ѹ� �� �̽��ϴ�. \n" ;
    cards.pop(); // top�� �ִ� ī�带 �ϳ� �̾Ƴ� ��!!!! �Ҹ��� �鸳�ϱ� ?
    cout << "\n ���� Top�� �ִ� ���� =" << cards.top() ;
    cout << "\n ���� Stack�� ������ ���� = " << cards.size();


    return(0) ;

 }
