// No.1 Execution Time Measurment Instrumentation

#include <iostream>
#include <stdio.h>
#include <ctime>		// Time Check�� �ϱ����� �ʿ��� ���
#include <cmath>		// Math Function���� ����ϱ� ���� ���
using namespace std;

int main() {
	clock_t	start;
	clock_t	end;
	time_t	currentTime;
	struct	tm t;
	char*	timeString;
	char	buffer[256];
	int		intX, counter;
	double	mydouble ;

	time(&currentTime);	// C++ int data type �����ð��� �����մϴ�.
	cout << " ���� int ���� 1��� Test\t";
	start = clock();
	for(int i=1; i < 10000; i++) {
		for(int j = 1; j < 10000; j++)
			intX = i+j;
	}	// end of for i
	end = clock();		// 1. ����ð� üũ

	cout << ((double)(end - start))/(long)CLOCKS_PER_SEC << " sec" << endl;

	cout << " sin( )/double ���� 1��� calling 2 \t";
	start = clock(); counter=0 ;
	for(int i=1; i < 10000; i++) {
		for(int j = 1; j < 10000; j++) {
            counter++ ;
            mydouble = sin((double)(i)/(double(j)) + i-j );	// printf("\n %d myd = %f ", counter, mydouble) ;
        }
	} // end of for i
	end = clock();	// 1. ����ð� üũ

	cout<<((double)(end - start))/(long)CLOCKS_PER_SEC<<" sec"<<endl;

	timeString = ctime(&currentTime);	// 2. ctime �Լ� �̿� ���� �ð� ���
	printf("\n\n  Current Time : %s from ctime",timeString);

	// 3. asctime �Լ��� �̿��Ͽ� ctime�� �����ϰ� ����ϱ�
	timeString = asctime(localtime(&currentTime));
	printf("\n Current Time : %s from local time",timeString);

	// 4. Format�� ���߾� �ð� ��� (ex. 2019-09-19 AM 09:23:29 EST)
	t = *localtime(&currentTime);
	strftime(buffer,sizeof(buffer), "%Y-%m-%d %p %I:%M:%S %Z",&t);
	printf(" Formatted Time : %s\n",buffer);

    printf(" ������ ��� �������ϴ�. " );
	getchar( );	// ���� ȭ���� �����ϰ� ����� �Է��� ��ٸ�.
	return 0;

}//End of Main
