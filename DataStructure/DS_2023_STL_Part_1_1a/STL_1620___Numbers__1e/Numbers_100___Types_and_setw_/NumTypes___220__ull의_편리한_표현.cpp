#include <stdio.h>

int main() {


    for (auto isize = 1ull; isize < 1000'000'000ull; isize *= 100) {
        printf("1. %ld\n", isize );                       // long ũ���� ���� ���ͷ�
        printf("2. %lld\n",isize);               // long long ũ���� ���� ���ͷ�

        printf("\n3. %u\n", isize);                         // unsigned int ũ���� ���� ���ͷ�
        printf("4. %lu\n", isize);               // unsigned long ũ���� ���� ���ͷ�

        printf("\n5. %lu\n", isize);                       // unsigned long ũ���� ���� ���ͷ�
        printf("6. %llu\n",isize);
    }
    return 0;
}
