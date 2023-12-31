#include <cstdlib>
#include <stdint.h>
#include <iostream>

using namespace std;

union number {
    double d;
    uint64_t i;
};

void display(double d);
void display(union number n);

int main( ) {
    int i;
    double d;


    d= 3.45678 ;
    printf("\n Input d = %f", d ) ;
    display(d);
    return 0;
}

void display(double d) {
    union number n;
    n.d = d;
    display(n);  // �ٽ� display(����)�� ȣ����. double d�� ������ �а�����...
}

void display(union number n) {
    int i, bindex ;
    uint64_t base = 1;
    char dtobin[63];

    dtobin[62]= '\0' ;
    bindex = 62 ;    // excess 64 system. �� ���� ������ 64�� ����.
    cout << "\n   ��ȣ: " << (n.i & (base << 63)) << " ";


    cout<< "\n ������: " ;

    for (i = 62; i > 51; --i) {
        cout << ((n.i & (base << i)) >> i);
    }

    cout << " ";

    cout << "\n �Ǽ���: " ;

    for (; i >= 0; --i) {
        cout << ((n.i & (base << i)) >> i);
    }

    cout << endl;
}

