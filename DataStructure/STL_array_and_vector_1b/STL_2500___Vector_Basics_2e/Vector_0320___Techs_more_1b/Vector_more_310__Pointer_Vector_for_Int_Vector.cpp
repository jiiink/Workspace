// ���� �߿���. ������ �ڷᱸ���� �������� ��

#include <bits/stdc++.h>
using namespace std;

int main() {

// v_pointer�� vector of vector(int)�� ������.
vector <vector<int> >* v_pointer  = new vector <vector <int>> ();

vector <int> v1, v2;
v1.push_back(101);
v1.push_back(202);
v1.push_back(303);

v2.push_back(-155);
v2.push_back(-267);
v2.push_back(-356);
v2.push_back(-458);

v_pointer->push_back(v1);
v_pointer->push_back(v2);

cout << "\n (*v_pointer)[0][0] = " << (*v_pointer)[0][0] << endl;
cout << "\n (*v_pointer)[0][2] = " << (*v_pointer)[0][2] << endl;
cout << "\n (*v_pointer)[1][2] = " << (*v_pointer)[1][3] << endl;

} // end of main()

