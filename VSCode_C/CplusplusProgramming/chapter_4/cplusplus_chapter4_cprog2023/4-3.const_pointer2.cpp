//4-3. const_pointer2.cpp   4.2.2 ��� pointer ����
//function argument�� const ���Ǵ� ������ �ǽ� - const�� �ֿ� �뵵�� �Լ��� ���޵Ǵ� parameter�� ���� ��� �����ϴ� ����
#include <iostream>
using namespace std;

void square(const int *const ); //const_pointer_to_const
void square1(int *const ); //const_pointer
void square2(const int* ); //pointer_to_const
void square3(int*); //pointer

int main(){
    //�ּ� 1��
    //*
    int i=10;
    int *const j = &i; //const_pointer
    square1(&i); //pointer
    square(j); // `int* const` is passed to the `const int* const` by parameter 
	cout <<"i = "<<i<<", *j = "<<*j<<endl;
	//*/
    //�ּ� 2��
    
    int k=10;
    const int *const width = &k;
    square(width);
    //square1(width);  //const int * ������ �μ��� int * ������ �Ű������� ȣȯ���� �ʴ´�
	//why this doesn't work?
    
    //�ּ� 3��
    
    int a[]={12, 46, 58, 27}; 
    const int *p = a;
    //*p = 10;//���� ������ �� �ִ� lvalue���� �Ѵ�
	//p[1] = 55;
	a[1] = 44;
	p++; //p is pointer.
	int *q = a;
	//q = p; //const int * ������ ���� int * ���Ŀ� assign�� �� ����
	//*
	int m = 10;
	const int n = 20;
	int *pm = a;
	int *const pn = a;
	const int *const e = a;
	m = n;m = *pn; m = *e;
	n = m; n = *pm; n = *e;//n�� ������ �� �ִ� lvalue ���� �Ѵ�
	pm = &m; pm = &n; pm = pn; pm = e; //&n is same to ` const int* `
	pn = &m; pn = &n; pn = pm; pn = e; //pn is const.
	e = &m; e = &n; e = pm;e = pn; //e is const.
	
	
	square(pm);	square1(pm); square2(pm); square3(pm);
	square(pn);	square1(pn); square2(pn); square3(pn);
	square(e);	square1(e); square2(e); square3(e);
	
	
	system("pause");
	return 1;
}
void square(const int *const width){ //const �ֵ� ����� ���� parameter����
	//*width = (*width) * (*width); //width is const, *width is also const.

}
void square1(int *const j) { //const �ֵ� ����� ���� parameter����
	int v;
	*j *= *j; //j is const, *j is not const.
}
void square2(const int* const j) { //const �ֵ� ����� ���� parameter����
	int v;
	//*j *= *j; //*j is const.
}
void square3(int* j) { //const �ֵ� ����� ���� parameter����
	int v;
	*j *= *j; //*j is not const
}
