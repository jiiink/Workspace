#include <iostream>
#include <string>
using namespace std;

int main() {
	string a = "1234", b = "1a2b3c";
	int num = 4321;

	// 1. string -> int
	cout << stoi(a) << "\n";
	// 8���� 1234�� -> 10������ ��ȯ
	cout << stoi(a,nullptr,8) << "\n";


	// 2. string ���ڿ����� ���ڸ� �����Ͽ� ���
	for (int i = 0; i < b.size(); i++) {
		if (b[i] >= '0' && b[i] <= '9') cout << b[i] - '0';
	}
	cout << "\n";


	// 3. int -> string
	string s = to_string(num);
	string r = "��� = ";

	r += num;
	cout << r << "\n";

	r = "��� = ";
	r += s;
	cout << r << "\n";

	return 0;
}
