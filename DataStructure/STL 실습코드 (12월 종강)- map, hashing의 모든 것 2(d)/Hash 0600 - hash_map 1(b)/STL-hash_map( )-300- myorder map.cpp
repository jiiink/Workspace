// map�� ���������δ� Red-Black Tree�� �����Ǿ� �ִ�.  ���� ��������� �����ϴ�.
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <stdio.h>
using namespace std;


struct gtestr{
  bool operator()(const string s1, const string s2) const   {
    if ( s1 > s2 ) return(1) ;
    else return (0) ;
  }
};



int main(){

    map<string, int, gtestr > m;
	//insert�� �̿��� ����
	m.insert(pair<string, int>(string("�嵿��"), 100));
	m.insert(pair<string, int>("��ȯ��", 1000));

	m["���μ�"]=  200;
	m["�����"]=  400;
	m["�̺���"]=  500;
	m["������"]=   50;
	m["�ް���"]= -150;

//	hash_set<int> ssssssss;

	map<string, int>::iterator it;
	cout << "���� 1" << endl;
	cout << "�������� �Է� �� ���" << endl;
	cout << "��¯ ��ȸ" << endl;
	for(it=m.begin();it!=m.end();it++){
		cout << "�̸� : " << it->first << " ��� : " << it->second << endl;
	}

	m.erase(m.begin());
	m.erase("�̺���");

	cout << "\n ���� 2" << endl;
	cout << "erase(m.begin())�� erase(\"�̺���\") �� ������ ���!!" << endl;
	cout << "��¯ ��ȸ" << endl;
	for(it=m.begin();it!=m.end();it++){
		cout << "�̸� : " << it->first << " ��� : " << it->second << endl;
	}

	cout << "���� 3" << endl;
	cout << "find() �Լ� ���" << endl;
	it=m.find("��ȯ��");

    if (it==m.end()) {
		cout << "�����ǿ� �����ϴ�." << endl;
	}else{
		cout << it->first << "�� ����� " << it->second << "�̴�." << endl;
    }

    getchar( ) ;
	return 0;
} // end of main( )
