
#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;

typedef vector<string> MyStatement;

void readDocument   (ifstream& ifs);
void writeDocument  (ofstream& ofs);

MyStatement  statement;     // �ϳ��� ������ �ܾ� word�� �����Ǿ� ����
vector <MyStatement> book;   // �ϳ��� å�� �������� �������� �����Ǿ� ����

int main(){
	ifstream documentIfs("CrimePunish.txt");
	ofstream documentOfs("CrimePunish_Sorted.txt");

    cout << "\n �Է� ������ �о� ���Դϴ�." ;
	readDocument(documentIfs);//������ ������ ��������� �о����
	cout<<"\n ��ü ������ ���� : "<< book.size() << endl;

    allout("�˿� ���� ù��° ����", *book.begin() ) ;

	sort(book.begin(), book.end()); //�� statement�� ���� ������ ����
	writeDocument(documentOfs);//���ĵ� ������ ���Ͽ� ��
	cout<<"\n ���ĵ� ������ ���� : " << book.size() << endl;

	documentIfs.close();
	documentOfs.close();

    allout("���� �� �˿� ���� ù��° ����", *book.begin() ) ;
    allout("���� �� �˿� ���� 1000��° ����",     *(book.begin()+1000) ) ;
    cout << "\n\n > 1000��° ������ ù �ܾ�: "     << *(( book.begin()+1000)->begin() ) ;
    auto wit = *(book.begin()+1000) ;
    cout << "\n wit.begin()+3 :" << *(wit.begin()+3) ;
    cout << "\n wit.begin()+5 :" << *(wit.begin()+5) ;
    cout << "\n 1000��° ������ 4��° �ܾ�:  :"   << *(( book.begin()+1000)->begin()+4 ) ;
//    for (auto w : *(book.begin()+1000) ) { // Contl-Shift-C comment ó��
//        cout << "\n " << w ;
//    }        	return 0;
}

void readDocument(ifstream& ifs){ //���� �б� �Լ�
	string word;
	cout << "\n In readDocument()" ;
	while( !ifs.eof() ){    // ifs.eof() ȭ���� ���ΰ��� �˻���.
		ifs >> word;        // cout << word ;
		if(word == "#"){    // ������ ���ΰ��� �˻���.
         	book.push_back(statement);
			statement.clear();
		}
		else statement.push_back(word); // ���� ���忡 �ܾ �ڷ� ä�� ����

        if(ifs.eof())break; //�� ��ġ���� eof�׽�Ʈ�� �ؾ� �� �� �� ���� ����.
	}
} // end of readDocument()

void writeDocument(ofstream& ofs){ //���� ���� �Լ�
	for(vector<MyStatement>::iterator stmtIter = book.begin(); stmtIter != book.end(); stmtIter++){
		MyStatement stmt = (*stmtIter);
		ofs << ">> " ;
		for(vector<string>::iterator wordIter = stmt.begin(); wordIter != stmt.end(); wordIter++){
			ofs<< (*wordIter)<<" ";
		}
		ofs<<endl;
	}
}
