#include<iostream>
#include<map>

using namespace std;

int main(void){

    multimap < string, string > alias;
    alias.insert(pair< string, string>("���±�", "�躰��") );
    alias.insert(pair< string, string>("���±�", "�踻��") );
    alias.insert(pair< string, string>("���±�", "������") );
    alias.insert(pair< string, string>("�վƼ�", "���") );
    alias.insert(pair< string, string>("�̴�ȣ", "�Ŷ���") );
    alias.insert(pair< string, string>("���ؿ�", "����") );
    alias.insert(pair< string, string>("�̴�ȣ", "�����") );

    multimap <string, string>::iterator iter;

    cout << "\n alias.size() = " << alias.size() ;
    cout << "\n alias.count(40) = " << alias.count("���±�") ;



    cout << "\n ��ü�� ��� ����غ���. \n" ;
    for(iter = alias.begin(); iter != alias.end(); iter++){
        cout << "\n [" << iter->first << ", " << iter->second << "] " ;
    }

    return 0;
}


