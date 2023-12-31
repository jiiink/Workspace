#include <iostream>
#include <bitset>
using namespace std ;

void float_bin(float f) {
    int x = *(int *)&f;
    bitset<sizeof(int) * 8> binary(x);
    cout << binary << endl;
}


main() {
    double x, mant, dtemp ;
    int exp = 0;

    cout << " �м��� �Ǽ�(double) x�� �Է��Ͻÿ�: ";
    cin >> x ;
    cout << "\n �Էµ� x= " << x ;


    mant = x;
    while (mant >= 1) {
        mant /= 2;
        printf("\n mant = %f, exp= %d", mant, exp ) ;
        exp++;
        // At this point x = mant * 2^(exp)
    }

    while (mant < 0.5) {
        mant *= 2;
        exp--;
    }

    cout << "\n �Ǽ� " << x<<" �� ���� ����: \n" ;
    cout << "\n mant = " << mant ;
    cout << "\n exp = " << exp ;
    cout << "\n double[x] =  2^(" << exp << ")*. \n";

    int bcount = 0 ;
    while (mant > 0) {
        mant *= 2;
        if (mant >= 1) {
            cout << '1';
            mant -= 1;  // ���� 1�ڸ��� ���� ��.
        } else  cout << '0';

        if( ++ bcount%8 == 0 ) cout << ' ' ;
    }
    cout << endl;
}
