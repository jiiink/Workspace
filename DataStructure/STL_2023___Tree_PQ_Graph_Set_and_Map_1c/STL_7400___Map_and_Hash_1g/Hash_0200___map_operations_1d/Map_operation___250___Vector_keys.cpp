#include <bits/stdc++.h>
using namespace std;

#include "mymaptool.h"

int main() {

	map< vector<int>, string > mymap = 	{   // Ư���Ͽ� ���� ����
				{ { 3, 4, 5, 6, 11, 13 },  "Coffee" },
				{ { 3, 2, 8, 15 }, "Milk" },
				{ {  } , "Burbon" },
				{ { 9, 8, 31  }, "Beer" }
	};

	map<  string, vector<int> > hermap = 	{  // Ư�� ������ ���� ��
				{ "Pizza", { 3, 4, 5, 6, 11, 13 } },
				{ "Rameon", { 3, 9, 13, 25 } },
				{ "Cutlet" , { } } ,
				{ "Deep Water", { 13, 15, 21  } }
	};

	for (auto entry : mymap) {  // C++11�� �Լ��� ���
	    cout << "\n Key= " << entry.second << "  :--->  "  ;
		for (int i : entry.first )
			    cout << i << " , ";

		cout << "\n " ;
	}

	for (auto wentry : hermap) {  // C++11�� �Լ��� ���
	    cout << "\n Key= " << wentry.first << "  :--->  "  ;
		for (int i : wentry.second )
			    cout << i << " , ";

		cout << "\n " ;
	}
	return 0;
}
