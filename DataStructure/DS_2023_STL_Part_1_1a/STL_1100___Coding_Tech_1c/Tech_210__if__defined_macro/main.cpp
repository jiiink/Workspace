#include <iostream>

using namespace std;

int main() {

#ifdef  macro1
printf( "Hello macro1�� �ִ�. !\n" );
#endif
#if ( macro1 > 10 )
#ifndef  macro2
printf( "Hello macro2�� ����. !\n" );
#endif

#ifdef  macro3
printf( "Hello macro3�� �ִ�. !\n" );
#endif


// Another use of the defined operator is in a single #if directive to perform similar macro checks:
#if  defined (macro1)  || !defined (macro2) || defined (macro3)
printf( "Hello 1-2-3 !\n" );
#endif


    cout << "Hello world!" << endl;
    return 0;
}
