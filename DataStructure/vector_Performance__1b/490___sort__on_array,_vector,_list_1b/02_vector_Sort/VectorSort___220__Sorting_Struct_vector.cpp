// �ϳ��� ���ڰ� �ƴ� �ϳ��� structure�� �����ϴ� ���
#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;

struct Food {   // ���� ����ü = {���� , ��, �̸� )
  int price ;
  int taste ;
  string fname ;
} myfood ;

bool mychoice (struct::Food a, struct::Food b) {
    //  ��/������ ������ ������ �̰����� �켱 ������ ����.

    if( float(a.taste)/float(a.price) <  float(b.taste)/float(b.price) )
         return ( false) ;
    else return ( true );
} ;

int main() {

	vector<Food>  menu ;
	vector<Food>::iterator  im ;
	Food plate ;

	cout << "���� ������ ������� sorting�� �� ���ϴ�. \n" ;

	plate.price = 4500 ; plate.taste =  6 ; plate.fname = "Noodle"  ; menu.push_back(plate) ;
	plate.price = 7800 ; plate.taste = 10 ; plate.fname = "Pizza" ; menu.push_back(plate) ;
	plate.price = 1500 ; plate.taste =  1 ; plate.fname = "�����"  ; menu.push_back(plate) ;
	plate.price = 5800 ; plate.taste =  6 ; plate.fname = "Hamburger" ; menu.push_back(plate) ;
	plate.price = 1100 ; plate.taste =  4 ; plate.fname = "�ﰢ���"  ; menu.push_back(plate) ;
	plate.price = 2700 ; plate.taste =  5 ; plate.fname = "Richtoast"  ; menu.push_back(plate) ;

	sort( menu.begin(), menu.end(), mychoice ) ;


	for(im=menu.begin(); im < menu.end(); im++ ) {
        plate = *im ;
        cout << "\n " << im- menu.begin()+1 << " ��° ������ = " ;
        cout << plate.price << "  " <<  plate.taste << "  " << plate.fname ;
	}

} // end of main ( )
