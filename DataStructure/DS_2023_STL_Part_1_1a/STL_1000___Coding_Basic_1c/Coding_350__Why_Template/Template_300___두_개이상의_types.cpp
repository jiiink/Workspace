#include <iostream>
using namespace std;

template<typename T1, typename T2>

T1 Add(T1 a, T2 b) { // ����� T1 type���� ������.
	T1 result = a+b;
	return result;
}


int main() {
	int my = 13;
	float your = 87.09 ;
	cout << "Add( my, your )= " << Add( my, your ) << "\n" ;
	cout << "Add( your, my )= " << Add( your, my ) << "\n" ;
	return 0;
}
