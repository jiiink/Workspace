// No.1 Vector�� ���� - �����ϱ�
// �ݵ�� Project�� ���� �������� �ؾ� Debug Mode�� �����Ѵ�.
// Symbol Table ���� ���� ������ �ϱ� �����̴�.
// Debug Mode�� Release Mode �����ؾ� �Ѵ�.
// �� �޴����� Build >> Select Target >> { Release, Debug } ����

#include <bits/stdc++.h>
using namespace std;

template <typename C>
void dump(const char *desc, C c) {
	cout.width(12);
	cout << left << desc << "==> ";
	copy(c.begin(),c.end(),ostream_iterator<typename C::value_type>(cout," "));
	cout << endl;
} // dump( ) template

int main() {
 int ar[]={1,2,3,4,5,6,7,8,9,10};
 int i, num ;

     // ������ vector  <����> �����̸� (option)

     vector <string> v1;		        dump("v1 ==>",v1);
     vector <double> v2(10);	        dump("v2 ==>",v2);
     vector <int>    v3(10, 2009);      dump("v3 ==>",v3);
     vector <int>    v4(v3);	        dump("v4 ==>",v4);
     vector <int>    v5(&ar[2],&ar[5]); dump("v5 ==>",v5);



     printf("\n �Է� �迭 ũ�⸦ �Է��Ͻÿ� : ");
     scanf("%d",&num);

     vector<int> vi(num); // �������� ũ�� ����

     for (i=0;i<num;i++) {  vi[i]=i*2;  }
     for (i=0;i<num;i++) {
          printf("vi[%3d]=%3d\n",i,vi[i]);
     }
     printf("\n ���� ���� ������ ũ��� %d�Դϴ�.\n",vi.size());

     for (i=0;i<10;i++) {  vi.push_back(i*2); }		// �߰��ؼ� ���� �ֱ�
     for (i=0;i<10;i++) {  printf("vi[%d]=%d\n",i,vi[i]);  }
     printf("�غ�� ������ ũ��� %d �Դϴ�.\n",vi.size());
     printf("�غ�� ������ �ִ� ũ��� %d �Դϴ�.\n",vi.max_size());



} // end of main()

