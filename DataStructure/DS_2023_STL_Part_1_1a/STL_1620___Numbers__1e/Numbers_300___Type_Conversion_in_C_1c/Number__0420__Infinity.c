/*
#include<inttypes.h> �� Ȱ���غ���

���� int64_t �� ������ ����ؾߵȴٸ�
printf("%" PRId64 , val)

���� int64_t �� 16������ ����ؾߵȴٸ�
printf("%" PRIx64 , val)

���� void * �� ������(�ּ�) ���� ���� ����ؾߵȴٸ�
printf("%" PRIdPTR , val )

���� void * �� ������(�ּ�) ���� 16���� ����ؾߵȴٸ�
printf("%" PRIxPTR, val )                              */

#include <stdio.h>
#include <math.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>

int main(void) {

    double f = INFINITY;
    uint64_t fn;           // 64 bits Ư�� ����

    memcpy(&fn, &f, sizeof(f)) ;

    printf("\n ���Ѵ� - INFINITY:   %f %" PRIx64 , f, fn);
}

