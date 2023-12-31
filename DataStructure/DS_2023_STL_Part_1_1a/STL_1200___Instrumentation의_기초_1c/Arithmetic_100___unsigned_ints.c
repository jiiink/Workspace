#include <stdio.h>
#include <stdint.h>    // ũ�⺰�� ���� �ڷ����� ���ǵ� ��� ����

int main()
{
    int8_t num1 = -128;                    // 8��Ʈ(1����Ʈ) ũ���� ��ȣ �ִ� ������ ���� ����
    int16_t num2 = 32767;                  // 16��Ʈ(2����Ʈ) ũ���� ��ȣ �ִ� ������ ���� ����
    int32_t num3 = 2147483647;             // 32��Ʈ(4����Ʈ) ũ���� ��ȣ �ִ� ������ ���� ����
    int64_t num4 = 9223372036854775807;    // 64��Ʈ(8����Ʈ) ũ���� ��ȣ �ִ� ������ ���� ����

    // int8_t, int16_t, int32_t�� %d�� ����ϰ� int64_t�� %lld�� ���

    printf("\n num1 = %d", num1 ) ;
    printf("\n num2 = %d", num2 ) ;
    printf("\n num3 = %d", num3 ) ;
    printf("\n num4 in lld%% = %lld", num4 ) ;

    uint8_t  num5 = 255;                      // 8��Ʈ(1����Ʈ) ũ���� ��ȣ ���� ������ ���� ����
    uint16_t num6 = 65535;                   // 16��Ʈ(2����Ʈ) ũ���� ��ȣ ���� ������ ���� ����
    uint32_t num7 = 4294967295;              // 32��Ʈ(4����Ʈ) ũ���� ��ȣ ���� ������ ���� ����
    uint64_t num8 = 18446744073709551615;    // 64��Ʈ(8����Ʈ) ũ���� ��ȣ ���� ������ ���� ����

    // uint8_t, uint16_t, uint32_t�� %u�� ����ϰ� uint64_t�� %llu�� ���

    printf("\n num5 %%u = %u", num5 ) ;
    printf("\n num6 %%u = %u", num6 ) ;
    printf("\n num7 %%u = %u", num7 ) ;
    printf("\n num8 %%llu = %llu", num8 ) ;

    printf("\n\n Unsigned Integers Representation ") ;

    printf("\n -1234 %%u = %u", -1234 ) ;
    printf("\n 1234 %%u = %u", 1234 ) ;
    printf("\n -5 %%u = %u", -5 ) ;

    return 0;
}
