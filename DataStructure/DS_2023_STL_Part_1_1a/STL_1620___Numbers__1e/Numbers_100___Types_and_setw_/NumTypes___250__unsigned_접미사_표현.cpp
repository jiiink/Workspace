#include <stdio.h>

int main() {

    printf("1. %ld\n", -10L);                       // long ũ���� ���� ���ͷ�
    printf("2. %lld\n", -1234567890123456789LL);    // long long ũ���� ���� ���ͷ�

    printf("3. %u\n", 10U);                         // unsigned int ũ���� ���� ���ͷ�
    printf("4. %lu\n", 1234567890UL);               // unsigned long ũ���� ���� ���ͷ�

    printf("5. %lu\n", 10UL);                       // unsigned long ũ���� ���� ���ͷ�
    printf("6. %llu\n", 1234567890123456789ULL);    // unsigned long long ũ���� ���� ���ͷ�

    return 0;
}
