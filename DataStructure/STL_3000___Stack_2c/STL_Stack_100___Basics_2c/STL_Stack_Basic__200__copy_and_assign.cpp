// stack�� ����� �� �ִ� iterator�� ����. �ֳ��ϸ� Stack�� ������
// �ϳ��� ���� top( )�� ����Ǿ� �ֱ� �����̴�.
// ���� ������ ����� �ؾ� �Ѵٸ� ������ ����ϰ� �ٽ� �־�� �Ѵ�.

#include <iostream>
#include <stack>
#include "my_stack.h"
using namespace std;


int main () {
    stack <string> cards; /* Simple enough to create a stack */
    stack <string> another ;

    cards.push("Water"); /* push() will add a value, think of queues */
    cards.push("Candy");  /* adding some cards to the deck */
    cards.push("Banana");
    cards.push("Beer");
    cards.push("Fish");
    cards.push("Pizza");

    cout << "\n �غ�� Stack�� ��ü ���� \n " ;
    cout <<  cards  ;
    cout << "\n �غ�� Stack���� " << cards.size () << "���� ������ �ֽ��ϴ�. " << endl;
    cout << "\n ���� ���� �ִ� ���� top() =  " << cards.top() << endl;

    cout << "\n Top�� �ִ� ���Ҹ� �̾� ���ϴ�. \n" ;
    cards.pop(); // top�� �ִ� ī�带 �ϳ� �̾Ƴ� ��!!!! �Ҹ��� �鸳�ϱ� ?
    cout << "\n �ϳ��� popping�� ���� Top()�� ���� =  " << cards.top() << endl;
    cout << "\n popping�� ���� ���� ���� =  " << cards.size();
    cout << "\n �ѹ� Pop()�� ������ Stack�� ��ü ���� \n " ;
    cout << "�ѹ� pop( )�� another[]= " <<  another  ;

    cout << "\n\n ���� cards�� ��� another �������� �ű� ���� ��� " ;

    another = cards ;
    cout << "another[]= " <<  another  ;

    cards.pop() ;
    cout << "\n\n ���� cards���� �ϳ��� ���� �� another�� ��� " ;
    cout << "�ϳ� ���� �� another[]= " <<  another  ;

    return(0) ;

 }
