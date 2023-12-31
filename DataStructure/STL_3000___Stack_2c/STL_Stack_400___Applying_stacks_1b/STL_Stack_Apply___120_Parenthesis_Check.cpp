// STL ������ �̿��� �ùٸ� ��ȣ ���
// ���� dummy code�� �ۼ��ϰ� �̰��� �ܰ��� ����ȭ(stepwise refinement)�� �Ѵ�.
// �־��� ��ȣ ��Ʈ���� �ùٸ� ¦�� �����ΰ��� �˻��Ѵ�.
// �ϴ� �ܺο��� ���� ��ȣ�� ��� queue�� �ְ� �̰��� �ϳ��� ������ ó���Ѵ�.

#include <iostream>
#include <fstream>
#include <string>
#include <stack>
#include <list>
#include <deque>
#include <queue>
using namespace std;

stack <char> parenS ;
queue <char> parenQ ;
int result = 0 ;

void input_paren( string data ) {  // ȭ�Ͽ��� ��� ��ȣ ��Ʈ���� �о parenQ�� ���ʴ�� �ִ´�.
	int size = data.length();

	for (int i=0; i< size; i++)
		cout << data[i];

	cout << endl << "line read complete!!" << endl ;
} // end of input_paren( )

int token( char c ) {
	switch( c ) {
	case '(' : return( 10) ;
	case ')' : return(-10) ;
	case '[' : return( 20) ;
	case ']' : return(-20) ;
	case '{' : return( 30) ;
	case '}' : return(-30) ;
	case '$' : return(100) ;
	default : { cout << "What? Input Error " ; return( 999) ; }
	}
} // end of token( )


void check_paren( ) {  //  queue���� �ϳ��� ������ stack�� ���� ������ �˻縦 �մϴ�.
	cout << "�ϳ��� ���ÿ� ������ �˻縦 �մϴ�." << endl ;
	result = 0 ;
} // end of check_paren( )

void output_paren( ) {
	cout << "���� result�� �ִ� ���ڸ� ���� ����� �����մϴ�. " << endl ;
} // end of output_paren( )


int main() {  // �̷��� main( )�� driver routine���� ������ �ؾ� �մϴ�.
	ifstream inputStream( "paren01.txt" );
	string line;

	if (inputStream.good()) {
		while( !inputStream.eof() )    // ���� ������
		{
			getline( inputStream, line );    // ���پ� �о

			input_paren( line ) ;
			check_paren( ) ;
			output_paren( ) ;
		}
	}
	else {
		cout << "File open failure!!" << endl;
	}


	return 0;
} // end of main( )

