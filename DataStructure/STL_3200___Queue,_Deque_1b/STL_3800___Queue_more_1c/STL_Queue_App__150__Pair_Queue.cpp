// �پ��� ���Ҹ� �⺻���� �ϴ� ť �����
// Adaptor�� �̿��� ť�� ������ �����ݴϴ�.

#include <iostream>
#include <queue>
using namespace std;

int main() {
  int i;

  typedef pair<string, float > PLAYER ;  // ���� �̸��� Ÿ��
  typedef vector<int>       SEQ ;
  vector<int>  vectemp ;



  PLAYER    myplay ;
  SEQ       myseq  ;
  queue < PLAYER >  lotte ;
  queue < SEQ >     sk ;


  myplay.first  = "�̴�ȣ" ;   myplay.second = 0.343 ;   lotte.push( myplay ) ;
  myplay.first  = "�߽ż�" ;   myplay.second = 0.272 ;   lotte.push( myplay ) ;
  myplay.first  = "�ں���" ;   myplay.second = 0.298 ;   lotte.push( myplay ) ;
  myplay.first  = "�嵿��" ;   myplay.second = 0.221 ;   lotte.push( myplay ) ;
  cout << "Queue size() = " << lotte.size() << endl;

  myseq.push_back( 34) ;  myseq.push_back( 134) ;  myseq.push_back( 234) ;
  sk.push( myseq ) ;
  myseq.push_back( 5) ;  myseq.push_back( 6) ; sk.push( myseq ) ;
  cout << "The queue SK size is now " << sk.size() << endl;

  return 0;
} // end of main( )
