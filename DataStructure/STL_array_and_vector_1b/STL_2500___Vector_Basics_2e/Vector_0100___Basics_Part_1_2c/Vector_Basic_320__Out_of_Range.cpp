#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <stdexcept>
#include <stdio.h>
#include <string.h>
#include <typeinfo>
using namespace std;

int main() {

	// ���� : vector index�� �Ѿ �� ���� ó�� (���� �߿���)
	vector<int> vwi {10, 20, 30, 40, 50, 60 } ;
	cout << "[10]��° ���� = " << vwi[10] << endl;

	try {
		//cout << vwi[10] << endl;
		int i = vwi.at(10) ;
	}
	catch(out_of_range e) {  //
		cout << "\n ������ ���� ������ ������ϴ�. ��� !!" << endl;
	    cout << "\n Exception Type: " << typeid(e).name() << endl;
	}


} // end of main ( )
