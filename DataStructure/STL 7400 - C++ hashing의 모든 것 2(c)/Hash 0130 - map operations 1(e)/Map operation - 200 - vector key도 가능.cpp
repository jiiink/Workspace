#include <bits/stdc++.h>
using namespace std;

#include "mymaptool.h"

int main() {

	map< vector<string>, vector<string> > mymap = 	{
				{ { "�λ�", "������" }, {"�λ���б�", "Coffee"}  },
				{ { "����", "������" }, {"������б�", "Milk", "Sorry" }  }
	};


	for (auto entry : mymap) {  // C++11�� �Լ��� ���
		for ( string i : entry.first )
			    cout << i << " , ";
		cout << "\n ��� value ===>  " ;
		for (string i : entry.second )
			    cout << i << " , ";
		cout << "\n " ;

	}
	return 0;
}

