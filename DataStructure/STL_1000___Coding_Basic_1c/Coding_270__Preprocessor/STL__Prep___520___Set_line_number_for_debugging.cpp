#include <stdio.h>
#define DEBUG

int main(void) {

    int count = 100;
    #line 100   "Kill me"  /* <-- �� ���� ��ȣ�� 100�̴� */
    #ifdef DEBUG /* <-- �� ���� ��ȣ�� 101�̴� */
        printf("line:%d, count = %d\n", __LINE__, count);
    #endif

    count = count * count - 56 ;  // �Ϻη� ������ ����� �ٹ�ȣ�� Ȯ�� ; ���� �Ŀ�
    #ifdef DEBUG
        printf("line:%d, count = %d\n", __LINE__, count);
    #endif
    count = count / 2 + 48;
    #ifdef DEBUG
        printf("line:%d, count = %d\n", __LINE__, count);
    #endif
}



