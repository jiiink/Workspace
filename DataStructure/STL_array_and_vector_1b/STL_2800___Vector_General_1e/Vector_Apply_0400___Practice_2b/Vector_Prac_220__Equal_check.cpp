// vector�� �� ����� ���ϴ� �ſ� ������ �Լ��Դϴ�.
// �پ��� ��츦 ���캸�� �� ����� �ݵ�� �����ε��� �սô�.
//

#include <bits/stdc++.h>
using namespace std;


int main() {

	 // ����2. vector�� ��
	 cout << endl <<  "���� - vector ��°�� ���ϱ� \n " << endl ;
	 const char *str6="0123456789";
     vector<char> vcomp1(&str6[0],&str6[10]);
     vector<char> vcomp2, vcomp3;

     vcomp2 = vcomp1;
	 puts(vcomp1 == vcomp2 ? "����":"�ٸ���");
	 puts(vcomp1 == vcomp3 ? "����":"�ٸ���");  // vcomp3 �� empty

     vcomp2.pop_back();
     cout << "\n �ι�° �� ���� " ;
     puts(vcomp1 > vcomp2 ? "vcomp1 > vcomp2 ":"vcomp1 <= vcomp2");


	 return 0;
}
