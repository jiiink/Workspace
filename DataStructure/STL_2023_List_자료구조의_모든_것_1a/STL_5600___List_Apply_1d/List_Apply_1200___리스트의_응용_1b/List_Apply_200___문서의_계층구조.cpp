// �ѱ��� ����� ��� ANSI-DOS encoding�� �ؾ� �Ѵ�.
// �Ǵ� �ڽ��� ��ǻ�Ϳ� �´� encoding ����� ã�ƾ� �Ѵ�.

#include <bits/stdc++.h>
#define allout(msg,lx)  cout<<"\n"<<msg<<" : ";for(auto &w : lx ) cout<< " " << w ;
#define deepout(msg,deepl)  cout<<"\n"<<msg<<" : \n";\
                            for(auto w : deepl ){cout<<"\n";for(auto q:w) cout<< " " << q ;}
using namespace std;

typedef string              Word ;
typedef list <Word>         Statement   ;
typedef list <Statement>    Paragraph   ;
typedef list <Paragraph>    Section     ;
typedef list <Section>      Book        ;

int main() {

    Statement s1 {"�ڷᱸ����", "����", "����ִ�", "�����ΰ�?", "�Ӷ�?"} ;
    Statement s2 {"������", "����", "¯¯��", "�׷���", "�л����Դ�", "����", "���θ�?"} ;

    allout( "���� s1 = ", s1 ) ;
    allout( "���� s2 = ", s2 ) ;
    Paragraph DS ;

    DS.push_back( s1 ) ;
    DS.push_back( s2 ) ;


    deepout( "\n ������ ������ ����", DS ) ;

	return 0;
}

