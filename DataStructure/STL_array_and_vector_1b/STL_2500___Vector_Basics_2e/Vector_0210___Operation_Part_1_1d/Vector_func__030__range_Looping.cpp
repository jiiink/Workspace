// vector �����̳ʿ��� ���Ҹ� �����ϰ� Ư�� ���Ҹ�  �����ϱ�


#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;


int main() {
     const char *str="0123456789";
     vector<char> vc(&str[0],&str[10]);
     allout ("���� ���� ", vc);

     vc.push_back('A');
     allout ("A �߰�", vc);

     vc.insert( vc.begin()+3,'B');
     allout ("B ����", vc);

     vc.pop_back();
     allout ("�� ��� ����", vc);

     vc.erase( vc.begin()+5,vc.begin()+6);
     allout ("5�� ����", vc);

     vc.erase( vc.begin()+5,vc.end()    );
     allout ("5���� ������ ����", vc);

     // ���� 2
     cout << "\n \n ���� 2�� ���� �մϴ�\n" ;
     vector<char> vc1;
     for (int i=0; i<10 ; i++) { vc1.insert(vc1.begin(),'Z');  }
     allout("���� �߰�", vc1);

     vector <char> vc2;
     vc2.insert( vc2.begin(),10,'Z');
     allout("�Ѳ����� �߰�", vc2);


} // end of main( )
