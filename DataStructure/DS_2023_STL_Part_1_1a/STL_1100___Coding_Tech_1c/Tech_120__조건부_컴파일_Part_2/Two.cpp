// ���Ǻ� ������ �ǽ� (���ϴ� �κи� ������ ��. )
// �ϳ��� �ҽ����� �پ��� exe�� ����� ��.

#include <iostream>


using namespace std;



int main(void) {   // Input
    int i,s ;
    i = 100 ;
    s = 0 ;

    while( --i>0){
        s += i ;
#ifdef MYDEBUG
        cout<< "i= " << i << " \n" ;
#endif
    }

  cout << "sum = " << s ;
  return 0;
}


