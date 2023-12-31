#include <iostream>
using namespace std;

template<typename T> // �Ϲ� �Լ� ���ø�
T Add(T a, T b) {
	T result = a+b;
	return result;
}

// �Լ� ���ø� ����ȭ(���� �Լ� ���ø��� �������̵� �� ��)
// ���ø� �Ķ���Ͱ� ��� double �ڷ����̶�� �� �Լ��� �켱������ ȣ��ȴ�
template<>
double Add(double a, double b) {
	double result = a+b;
	return result;
}

int main() {

	int sum = Add<int>(2, 3);                       // <int> �� ��������
	cout << "���� �հ�:" << sum << endl;
	double dsum = Add<double>(2.1, 3.2);    // <double> �� ��������
	cout << "�Ǽ� �հ�:" << dsum << endl;
	return 0;
}
