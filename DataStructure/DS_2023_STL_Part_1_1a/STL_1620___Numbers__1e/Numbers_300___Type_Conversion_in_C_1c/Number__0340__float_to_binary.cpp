#include <iostream>
#include <bitset>
using namespace std ;

void float_bin(float f) {
    int x = *(int *)&f;
    bitset<sizeof(int) * 8> binary(x);
    cout << binary << endl;
}


main() {
    double x, mant;
    int exp = 0;

    cout << "�Ǽ�(mantissa) x�� �Է��Ͻÿ� : ";
    cin >> x ;
    cout << "\n �Էµ� x= " << x ;


    mant = x;
    while (mant >= 1) {
        mant /= 2;
        exp++;
        // At this point x = mant * 2^(exp)
    }
    while (mant < 0.5) {
        mant *= 2;
        exp--;
    }
    cout << "\n " << x<<" is stored in the computer as \n"<< x <<" = ";
    cout <<"float of x =  2^(" << exp << ")*.";
    while (mant > 0) {
        mant *= 2;
        if (mant >= 1) {
            cout << '1';
            mant -= 1;
        } else
            cout << '0';
    }
    cout << endl;
}
