// No.2 Wording Vector Ȱ���ϱ� STL

#include <iostream>
#include <fstream>
#include <string>
#include <vector>			//Vector�� ����ϱ� ���� ���
#include <algorithm>		//STL������ ����ϱ� ���� ���
#include <stdexcept>        // Try Catch�� ����ϱ� ���ؼ� �־�� �ϴ� ���
using namespace std;

// Global Variables
vector < vector<string> > Book ;
vector<string> Text;
vector<string>::iterator strit;
string mystr ;

int main(){

	ifstream fin("Heaven.txt");	//Initialize & Reading Words
	while(!fin.eof()) {
		string temp;
		fin>>temp;
		Text.push_back(temp);
	}//Initialize End
	cout << "�־��� ȭ���� �ܾ �� �о����ϴ�. " << endl ;
	cout << "�ܾ��� ������ " << Text.size() << endl << endl ;

	for(int i = 0 ; i <= 11 ; i++) {
            cout << i << "= " << Text[i] << endl ;
    }

	//����2. ���� ������ �ܾ ����Ͻÿ�.
	cout<<"\n ������ �ܾ�� " << Text[ Text.size()-1] << endl;

	//����3. ��� �ܾ ���������� ���������� 25��° ��Ÿ���� �ܾ ����Ͻÿ�.
	vector<string> align(Text);		// TextVector�� ����
	sort( align.begin(),align.end() );

	//����4. Ư���� ��Ʈ���� �� ���Ͽ� �ִ��� ã�Ƴ��� ������ �� ��ġ�� ����ϰ�
	//       ������ 0�� ����Ͻÿ�.
	vector<string>::iterator it;

	cout << "�˻��� �ܾ �Է��ϼ���: " ;
    cin >> mystr ;
    cout << "�Է��Ͻ� �ܾ�� " << mystr << " �Դϴ�." << endl ;

	cout << " �˻��� " << mystr << " �� ù��° �߰���ġ = " ;
	it = find(Text.begin(),Text.end(), mystr );		//��ġ�ϴ� ù��° ��ġ Return

	if(it == Text.end()){ cout<<  " - �ܾ ��Ÿ���� �ʾ���"<<endl; }
	else{ cout<<distance(Text.begin(),it)+1 <<" ��°�� ���� " << endl; }

	//����5. �� �ܾ��� �󵵼��� üũ�Ͻÿ�.
	fin.close();
	return 0;
}//End of Main
