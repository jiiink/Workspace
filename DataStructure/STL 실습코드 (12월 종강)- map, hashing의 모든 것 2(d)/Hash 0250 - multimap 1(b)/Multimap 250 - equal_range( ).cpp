#include<iostream>
#include<map>
using namespace std;

int main(void){

    multimap<int, string> mm;

    mm.insert(pair<int, string>(60, "C"));
    mm.insert(pair<int, string>(30, "C++"));
    mm.insert(pair<int, string>(40, "Linux"));
    mm.insert(pair<int, string>(40, "�ٶ���"));
    mm.insert(pair<int, string>(40, "���ű�"));
    mm.insert(pair<int, string>(70, "JAVA"));
    mm.insert(pair<int, string>(40, "Ubuntu"));
    mm.insert(pair<int, string>(90, "Unix"));
    mm.insert(pair<int, string>(40, "CentOS"));


    multimap<int, string>::iterator iter;

    for(iter = mm.begin(); iter != mm.end(); iter++){
        cout << "\n mm[" << iter->first << ", " << iter->second << "] " ;
    }
    cout << endl << endl;



    cout << "\n �ߺ� Ű ���� �����ϴ� 40 �� ���� ���." ;
    for(iter = mm.equal_range(40).first; iter != mm.equal_range(40).second; iter++){
        cout << "\n [" << iter->first << ", " << iter->second << "] " ;
    }
    cout << endl;



    // ���� >= equal_range.first
    // ���� < equal_range.second
    // [ first, second )  ���󱸰�.
    pair<multimap<int, string>::iterator,
          multimap<int,string>::iterator> pair_iter = mm.equal_range(40);


    cout << "\n pair_iter.first : "
        << (pair_iter.first)->first << ", " << (pair_iter.first)->second << endl;
    cout << "\n pair_iter.second: "
        << (pair_iter.second)->first << ", " << (pair_iter.second)->second << endl;

    //���⼭ pair_iter.first �� ���� Test2 ���� lower_bound �� ����Ű�� iterator�� �����մϴ�.
    //���⼭ pair_iter.second �� ���� Test2 ���� upper_bound �� ����Ű�� iterator�� �����մϴ�.

    return 0;
}


