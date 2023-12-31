// �ڷᱸ�� �ǽ� No. 3
// STL - try�� �̿��ؼ� empty Stack ����ó��
//
#include <iostream>
#include <stack>
#include <list>
#include <deque>
#include <algorithm>    // std::sort
using namespace std;

int main() {
   	cout << endl << "ù��° ���� " << endl;
	cout << "���ÿ��� �پ��� ������ ��� �ٷﺸ��" << endl;
	stack<int> mystack;

	// ���������� error  ����� ����
	//  a. �� empty stack���� pop( ) �غ���
	cout << "The stack size is now " << mystack.size() << endl;
	try {
		if ( mystack.empty()) throw 0;
		mystack.pop();
	}
	catch(int e) {
		cout << "We got - empty Stack." << endl;
	}

	//  b. empty stack�� ������ ���� ������ ä�� �־��

	//  c.  TYPE A�� stack�� �ٸ� TYPE�� �־��
	cout << endl << "�ι�° ���� " << endl;
	cout << "The stack size is now " << mystack.size() << endl;
	    // string otherType = "banana"; // (����1) - �� ��쿡�� compile�� �����߻�
	    double otherType = 3.147592;

		mystack.push(otherType);
		cout << "The stack Last Input is " << mystack.top() << endl;
   	    cout << "The stack size is now " << mystack.size() << endl;

	//  d. stack�� �߰��� ������ �־� ����
	//  e. vector���� ����� �� �ִ� find( ), sort( )�� ������ ����غ���
	//  s.insert();		// Null ���Ҹ� ������ ������ �߻����� Ȯ��
	//  s.find();		// Null ���Ҹ� ã���� ���� �߻�
	//  sort(s.begin(), s.end());		// Stack������ vector�� �޸� sorting �Ұ�


	return 0;
}
