#include <bits/stdc++.h>
using namespace std;

struct Box {
  string name ; // Box�� �̸�
  int weight ;  // Box�� ��ü ���Ը� ������ ����
  stack <int> con ;  //  ������ Box�� stack���� ����.
  } ;

int main() {
     int i, baggage[15] = { 12, 22, 13, 4, 15, 6, 7, 18, 9, 5, 21, 22, 3, 4, 15 } ;
     int w ;
     Box my, your ;
     queue < Box > Cargo ;
     w = 0 ;
     for(i=0 ; i < 15 ; i++) {
        w += baggage[i] ;
        my.con.push( baggage[i] ) ;
        if( w > 30 ) {
            my.weight = w ;
            Cargo.push( my ) ;
            w = 0 ;
            my = Box() ;
        }
     }

    cout << "Con�� �ִ� ���� ��� ����ϱ�: \n" ;
    while (!Cargo.empty()) {
        your = Cargo.front() ;
        cout << Cargo.size() << " Weight = " << your.weight << endl;
        Cargo.pop();
    } // end of while( )

    // �������� Cargo�� ��� �ִ� Box�� weight ������ sorting�ؼ� ����ؾ� �Ѵ�.
     return 0;

} // end of main()
