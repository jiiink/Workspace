#include <windows.h>
#include <stdio.h>

int main() {
    int i ;
    printf( " 5�� ���� ���ϴ�. sleep...\n" );

    for(i=1; i <=5 ; i++){
        Sleep(1000) ;    //  ������ milli second
        printf("\n %d �ʰ� �������ϴ�. ", i);
    }

} // end of main()
