/*

 ��縦 �Ϸ��� ���� ����, ���̳� ��̸� ������ �Ѵ�.
 ���� ������ ���� ������ ���� �� ���� ���� ������ ������ �Ѵ�.
 ���̳� ��̸� ������� ������ ��ġ�� ���� ���� ������ �Ѵ�.
 ���� ������ ����� ������ ���� ������ �ȴ�. ��ȯ��(1960~ )

*/

#include <bits/stdc++.h>
using namespace std;
typedef struct{
	int words;
	int types ;  // ������ �ǹ��� ?
	list<string> wordList;
} MyStatement;

list <MyStatement> Book;

void ShowTitle();
void printHelp();
void printStatement(MyStatement statement);
void Command();
void readBook(string fileName);

int main(){
	readBook("CrimePunish.txt");  //������ ������ ��������� �о����
	ShowTitle();              //���α׷� Ÿ��Ʋ�� �����
	Command();               //����ڷκ��� ��ɾ �о ó����
	return 0;
}

void ShowTitle(){
	cout<<endl<<"[List�� �̿��� Book �м� ���α׷�]------------------------------"<<endl;
	cout<<"<CrimePunish.txt> : ��ü ������ ���� : "<<Book.size()<<endl<<endl;
	printHelp();
	cout<<"-------------------------------------------------------------------------------"<<endl;
} // end of printProgram()

void printHelp(){
	cout<<"[����]"<<endl;
	cout<<" 1) help         : ���� ���"<< endl;
	cout<<" 2) quit         : ���α׷� ����"<< endl;
	cout<<" 3) pline �ٹ�ȣ : CrimePunish���� �ش� �ٹ�ȣ(1���� ����)�� ������ ���"<<endl;
    cout<<" 4) pword i  j   : i��° ���忡�� j��° �ܾ�." << endl;
	cout<<" 5) find pword   : word�� �����ϰ� �ִ� ���� ��ȣ ��� ���"<< endl;
	cout<<" 6) insert k ~~~ : k �ڿ� ���� ����"<< endl;
} // end of printHelp( )

void printStatement(MyStatement statement){ //list<string>�� ������ ����ϴ� �Լ�
	cout<< "Statement: " ;
	for(auto w :statement.wordList ){ cout << w << " " ; }
} // end of printStaement( )

void Command(){ //����ڷκ��� ��ɾ �Է¹޾� ó���ϴ� �Լ�
	while(true){
		string command = "";
		cout << endl << ">>";
		cin >> command;
		if(command == "quit") break; // quit�� ������ loop�� �ߴ��Ѵ�.
		else if(command == "help")   printHelp();
		else if(command == "pline") {
			int line;
			cin>> line;
			if(line <= 0 ) cout<<" �߸��� �ٹ�ȣ �Դϴ�."<<endl;
			else{
			    MyStatement mystate ;
                list<string> myList ;
				auto it = Book.begin() ;
				advance(it, line-1) ;
				mystate = *it ;
                myList = mystate.wordList;
				for(auto s : myList) cout << s << " " ;
				}
			} // end of  if(command == "pline")
		else if(command == "pword" )  { cout << " ����� �� " ;         }
		else if(command == "find"  )  { cout << " �̰͵� ����� �� " ; }
		else if(command == "insert")  { cout << " insert�� ����� �� " ; }
		else{ 	cout<< " Oh! �߸��� ��ɾ��Դϴ�. help�� Ȯ���ϼ���."<<endl; 	}
	} // end of while()

} // end of Command( )


void readBook(string fileName){
	ifstream documentIfs(fileName.c_str());
	string word;
	MyStatement ms;
	while(!documentIfs.eof()){
		documentIfs>>word;
		if(word == "#"){ //������ ���� ���
			Book.push_back(ms);
			ms.wordList.clear();
		}
		else ms.wordList.push_back(word);

		if(documentIfs.eof())break;
	}
	documentIfs.close();
} // end of readBook()

