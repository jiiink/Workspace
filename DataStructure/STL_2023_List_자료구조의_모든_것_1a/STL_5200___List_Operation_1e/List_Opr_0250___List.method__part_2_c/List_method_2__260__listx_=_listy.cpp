// C++ ����Ʈ�� Python list�� �������� �����ؾ� �Ѵ�.
// Python���� la=[1,2,3], lb=la�� �ϸ� ���� ���� ��ü�� ����Ų��.
// �׷��� C++ list������ ������ value�� �����ؼ� 2���� ������ ����� �����.


#include <bits/stdc++.h>
#define myout(msg,x)  cout<< "\n" << msg << ":"; for(auto s : x) cout << " " << s ;
using namespace std;


int main(){

    list<int> lista = { 10, 20, 30, 40, 50, 60, 70, 80 } ;
    list<int> listb = { 100, 200, 300, 400, 500, 600, 700 } ;
    list<int> listx, listy ;

    myout(" lista[]= ", lista) ;
    myout(" listb[]= ", listb) ;

    listx = lista ;  // ������ copy�� �ڿ� ���� ����. �ΰ��� ����.
    myout(" listx = lista �� listx[]= ", listx) ;

    cout << "\n lista[]�� �� ���Ҹ� ������.\n" ;
    lista.pop_back() ;
    myout(" lista[]= ", lista) ;
    myout(" listx[]= ", listx) ;

    //    listy = lista + listb ; C++�� python�� �ƴմϴ�. + operator�� ����

    return 0;
}
