#include <iostream>
using namespace std;

#define TABLE_SIZE 100
    int table1[TABLE_SIZE];
#undef TABLE_SIZE

#define TABLE_SIZE 200
    int table2[TABLE_SIZE];
#include <iostream>

#define str(x) #x   // # �ڿ� ������ parameter�� ���ڿ�� ����Ѵ�.
#define glue(a,b) a ## b    //   ##�� �� parameter�� ���δ�.



#define getmax(a,b) ((a)>(b)?(a):(b))

#ifndef TABLE_SIZE
#define TABLE_SIZE 100
#endif
int table3[TABLE_SIZE];


int main() {

    int x=5, y;


    cout << str(�λ� ���ű� �λ� ���ű�);   // �̰��� cout << "test" �� ����
    glue(c,out) << "\n\n �۷縦 �̿��� ���ڿ�";


    y= getmax(x,2);
    cout << "\n  " << y << endl;
    cout << "\n  " << getmax(7,x) << endl;

    cout << "\n ���γѹ� :  " << __LINE__;
    cout << "\n ���� �̸� : " << __FILE__ << ".\n";
    cout << "\n ������ ���� ���� :  " << __DATE__;
    cout << "\n ������ �ð�: " << __TIME__ << ".\n";
    cout << "\n �����Ϸ��� ��: " << __cplusplus;

    return 0;
}

