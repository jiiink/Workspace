#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;

int main() {

	vector<int> vec = { 13, 34, 2, 66, 78, 11, 32, 74, 25 };

	int xmin = *min_element( vec.begin(), vec.end());
	auto my  =  min_element( vec.begin(), vec.end());
	cout << " �ּҿ����� ��ġ(��°) = " <<  my - vec.begin( ) << endl  ;
	int xmax = *max_element( vec.begin(), vec.begin()+(vec.end()-vec.begin())/2 + 1 );

	cout << " ù 1/2 ���� �߿��� xmax : " << xmax << endl;
	cout << " xmin : " << xmin << endl;

}
