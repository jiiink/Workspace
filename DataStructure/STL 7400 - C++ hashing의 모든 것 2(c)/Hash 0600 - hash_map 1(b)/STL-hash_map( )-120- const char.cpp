// Hashing Examples ������ �ؽ� �Լ��� ��

#include <iostream>
#include <vector>
#include <algorithm>
#include <hash_map>
#include <string>

using namespace std;
using namespace __gnu_cxx;

int main() {

        hash_map <const char*, int > months;
        hash_map <string, int      > xmon;   // �̷��� �ϸ� ����, �ݵ�� const *char ���
        string mys ;

        months["january"    ] = 31;
        months["february"   ] = 28;
        months["march"      ] = 31;
        months["april"      ] = 30;
        months["may"        ] = 31;
        months["june"       ] = 30;
        months["july"       ] = 31;
        months["august"     ] = 31;
        months["september"  ] = 30;
        months["october"    ] = 31;
        months["november"   ] = 30;
        months["december"   ] = 31;

        cout << "september ->  " << months["september"   ] << endl;
        cout << "���� ��� ->  " << months["fapril"      ] << endl;
        cout << "june      ->  " << months["june"        ] << endl;
        cout << "november  ->  " << months["november"    ] << endl;

        // xmon["january"]= 31 ; // �̷��� �ϸ� ����, �ݵ�� const�� ���

        return EXIT_SUCCESS;
}
