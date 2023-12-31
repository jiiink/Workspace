//4-2. const.cpp   4.2.2 ��� pointer ���� - ��� pointer�� �Լ��� ������ �� ���� ����
// �Ʒ� �ҽ��ڵ�� ��� pointer�� �׽�Ʈ�ϱ� ���� �뵵�� �ҽ� �ڵ�

//remove the comment, and check why error occured
#include<iostream>
using namespace std;
void square(const int* const);
void sum(int* const);
void add(const int*);

int main(void){
    //pointer ����� �����ϴ� �ҽ��ڵ�
    int i1 = 5;
    int i2 = 10;
    int i3 = 15;
    int i4 = 20;
	int *p1 = &i1; //pointer
    const int* pc_a = &i2; //pointer-to-constant
    const int* pc_b = &i2; //*p is constant
    //(*pc_a)++; //pc_a is pointer_to_const. *pc_a is const. So cannot change *pc_a.
    int* const cp_a = &i3; //constant pointer //p is constant
    int* const cp_b = &i3; //must initiallized
    //(*cp_a)++; //cp_a is const_pointer. cp_a is const. So can change *cp_a.
    const int* const cpc_a = &i4; //constant pointer-to-const
    const int* const cpc_b = &i4; 
    //(*cpc_a)++; //cpc_a is const_pointer_to_const. *cpc_a is const. So cannot change *cpc_a.
    cout << "�ʱ� ��" << endl;
    cout << "*pi : " << *p1 << " \t" << "*pc_a : " << *pc_a << "\t";
    cout << "*cp_a : " << *cp_a << "\t" << "*cpc_a : " <<  *cpc_a << endl<< endl;

	int *pi = &i1;//�� ���Ͽ� pointer-to-constant, constan pointer, constant pointer-to-const�� ���� ġȯ�� ���������� ����
    //pi = pc_a; //int* =! const int*   //error
    //pc_a = pi; //����� ����Ű�� �����Ͱ� �ٸ� �� ����Ű���� ���� �����ϴ�?
    //cout<<"*pc_a : "<<*pc_a<<endl;;

    //pi = pc_a;//const int*  ������ ���� int*�� assign�� �� ����
    //pi = cp_a; //��� �����Ͱ� ����Ű�� �� �ٸ� �����Ͱ� ����ų �� �ִ�?
    //cp_a = pi; //cp_a is const. so can't change
    //(*pi)++; //i3++;
    //pi = cpc_a;//const int*  ������ ���� int*�� assign�� �� ����
    //cp_a = pc_a; //cp_a is lvalue
	//pointer-to-constant�� ���Ͽ� ġȯ�� ���������� ����
    cout << "pointer-to-constant�� ������ ġȯ" << endl;
	pc_a = pi; //pointer
	//(*pc_a)++; //*pc_a is const.
    cout << "*pc_a : " << *pc_a << "\t";
    pc_a = cp_a;  //const_pointer
    cout << "*pc_a : " << *pc_a << "\t";
    pc_a = cpc_a; //const_pointer_to_const
    cout << "*pc_a : " << *pc_a << "\t";
    pc_a = pc_b; //pointer_to_const
    cout << "*pc_a : " << *pc_a << endl << endl;
    //*pc_a = *pi;  //���� ������ �� �ִ� lvalue���� �Ѵ�, ������ �� ���ٴ� ��
    //*pc_a = *cp_a; 
    //*pc_a = *cpc_a;
    //*pc_a = *pc_b;
    //*pc_a is const. so assign to pc_a

	//constan pointer�� ���Ͽ� ġȯ�� ���������� ����
    //cp_a = pi; //���� ������ �� �ִ� lvalue���� �Ѵ�, ������ �� ���ٴ� ��
    //cp_a = pc_a;
    //cp_a = cpc_a;
    //cp_a = cp_b;
    cout << "constant pointer�� ������ ġȯ" << endl;
    *cp_a = *pi; 
    cout << "*cp_a : " << *cp_a << "\t";
    *cp_a = *pc_a;
    cout << "*cp_a : " << *cp_a << "\t";
    *cp_a = *cpc_a;
    cout << "*cp_a : " << *cp_a << "\t";
    *cp_a = *cp_b;
    cout << "*cp_a : " << *cp_a << endl << endl;
    //cp_a is const. so assign to *cp_a
	
	//constant pointer-to-const�� ���Ͽ� ġȯ�� ���������� ����
    //both of cpc_a and *cpc_a are const. So can't assign
    //cpc_a = pi;    
    //cpc_a = pc_a;
    //cpc_a = cp_a;
    //cpc_a =cpc_b;
    //*cpc_a = *pi;
    //*cpc_a = *pc_a;
    //*cpc_a = *cp_a;
    //*cpc_a = *cpc_b;

    //pointer ����� ����ϴ� �ҽ��ڵ�: parameter ���޽ÿ� �ַ� ����Ѵ� 
    square(pi);
    sum(pi);
    add(pi);
    square(pc_a);
    //sum(pc_a);
    add(pc_a);
    square(cp_a);
    sum(cp_a);
    add(cp_a);
    square(cpc_a);
    //sum(cpc_a);
    add(cpc_a);

    system("pause");
}

void square(const int* const p) {
   // int* a = p;
   // int* const b = p;
    int const* c = p;
    int const* const d = p;
}
void sum(int* const q) {
    int* a = q;
    int* const b = q;
    int const* c = q;
    int const* const d = q;
}
void add(const int* q) {
    //int* a = q;
    //int* const b = q;
    int const* c = q;
    int const* const d = q;
}