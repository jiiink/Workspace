/*
 build option���� #define���� MACRO=xxx �� ����
*/


#include <iostream>

#define MYDEF    100    /* MYDEF�� ���� 100���� ���� */

#ifdef YOURDEF          /* ���� YOURDEF�� ���ǵǾ� �ִٸ�... */
    #define BASE "Zoh"     /* BASE == 10 */
#elif MYDEF             /* �׿ܿ� MYDEF�� ���ǵǾ��ٸ�... */
    #define BASE "Cho"      /* BASE == 2 */
#endif

#define N 100
using namespace std;


int main() {
    int x[ N ] ;

	cout << "\n BASE = " << BASE << endl ;

	return 0;
}

