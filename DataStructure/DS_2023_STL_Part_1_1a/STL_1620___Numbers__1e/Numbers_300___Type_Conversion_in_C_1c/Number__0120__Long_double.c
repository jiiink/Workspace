#include <stdio.h>

// �ݵ�� C compiler option���� -std=C99�� �����ؾ� �Ѵ�.

int main() {

    double d = 6.232345235;   //8 bytes
    long double ld = 5.5767458458;

    printf("%20.15Lf \n", ld);
    return 0;

}
