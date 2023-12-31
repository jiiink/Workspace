// multimap�� �ϳ��� slot�� �������� ���Ҹ� ���� �� �ִ�.
// ���� ��� � �л��� �Ἦ���ڰ� ���� �� �� ����̴�.

#include<iostream>
#include<map>
#include<string>

using namespace std;

int main(){
	multimap<string , int> m;

	m.insert(pair<string, int>("����",  10000)); // ���ڿ��� ������ �ٸ� 2������ �ִ�.
	m.insert(pair<string, int>("����",   9000));
	m.insert(pair<string, int>("����",   7000));
	m.insert(pair<string, int>("����",   6000));
	m.insert(pair<string, int>("������", 12000));
	m.insert(pair<string, int>("����",   15000)); // ��������
	m.insert(pair<string, int>("����",   15000));

	cout << "���� 1 " << endl;
	cout << "��Ƽ���� �ߺ� ���� ���ȴ�." << endl;

	multimap<string, int>::iterator it;
	for(it=m.begin();it!=m.end();it++){
		cout << "���� : " << it->first <<" ���� : "<< it->second << endl;
	}

	m.erase("����");

	cout << "\n\n ���� 2" << endl;
	cout << "m.erase(\"����\")�����ѵ�"<<endl;
	cout << "���ڿ� �ش��ϴ� ���� ���� �����Ǿ����� �˼� �ִ�."<< endl;
	for(it=m.begin();it!=m.end();it++){
		cout << "���� : " << it->first <<"���� : "<< it->second << endl;
	}
	return 0;
} // end of main( )
