#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;


int main() {

     cout << "\n ���� : vector insert( ) \n" ;

     vector<string> vc1;
     for (int i=124; i<130 ; i++) {
            vc1.insert(vc1.begin(), to_string( i ) );
     }
     allout("���� �߰�", vc1);

     vector <string> vc2;
     vc2.insert( vc2.begin(), 5, "�޷�");
     allout("�Ѳ����� 10�� �߰�", vc2);

     cout << "\n vc2[]�� ũ��: " << vc2.size() ;


} // end of main( )
