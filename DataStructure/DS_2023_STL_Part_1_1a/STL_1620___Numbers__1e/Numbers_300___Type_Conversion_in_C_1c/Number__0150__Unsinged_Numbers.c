// Displaying an unsigned int in bits
#include <stdio.h>

void displayBits( unsigned int value );

int main( void ) {
    unsigned int x;

    printf( "%s", "����� �Է��Ͻÿ�(%u) int: " );
    scanf( "%u", &x );

    displayBits( x );
}


void displayBits( unsigned int value ) {
    unsigned int c; // counter

    // 1�� �������� 31 bits Shift �Ͽ� bitmask�� ����ϴ�.
    unsigned int displayMask = 1 << 31;

    printf( "\n 32 bits�� value= %d �� �������� ǥ��: \n\n BITS:  ", value );
    for ( c = 1; c <= 32; ++c ) {
        putchar( value & displayMask ? '1' : '0' );
        value <<= 1; // shift value left by 1

        if ( c % 8 == 0 ) { // �� byte���� �� ĭ�� ���� ���� ���
            putchar( ' ' );
        }
    } // end for

    putchar( '\n' );
} // end function displayBits



