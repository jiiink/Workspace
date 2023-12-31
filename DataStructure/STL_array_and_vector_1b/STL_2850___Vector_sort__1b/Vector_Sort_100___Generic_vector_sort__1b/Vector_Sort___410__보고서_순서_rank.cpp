
#include <bits/stdc++.h>
using namespace std;

/*�л� ������, �̸��� ������ report�� ��ü ����
7
Tom     45  67 90 33 70 50 0
Gilda   67  80 80 80 0
Ross    67  90 70 80 0
Fred    45  30 79 89 15 66 55 0
Morris  93  70 70 67 0
Alia    90  80 80 70 0
Zeromy  90  70 80 80 0

*/

typedef struct { string name ;  vector<int> report; }  Stud ;

bool myfun ( Stud a, Stud b)   {
    return ((a.report.size())>( b.report.size())) ;
} // ���Լ�

bool yourfun ( Stud a, Stud b)   {   // ù �������� ��
    return ((a.report[0])>( b.report[0])) ;
} // ���Լ�

bool herfun ( Stud a, Stud b)   {  // ��ü�� lexico�� ��
    return ((a.report)>( b.report )) ;
} // ���Լ�

void outclass( vector < Stud > Pclass ){ // ��ü�� ��� ��.
    for(auto s : Pclass) {
        cout << "\n" << s.name << ": " ;
        for( auto t: s.report)  cout << " " << t ;
    }
}

int main() {

    int i, N, score ;
    string xname ;
    Stud   body ;
    vector < Stud > Pclass ;

    ifstream in("rank.txt");

    in >> N ; cout << "\n N= " << N ;

    for(i=0 ; i < N ; i++){
        in >> xname ;
        body.name = xname ;
        body.report.clear();
        while(1){
            in >> score ;
            if( score <= 0) break ;
            else {
                body.report.push_back( score ) ;
                          }
        } // end of while()
        // sort( body.report.begin(),  body.report.end() ) ;
        Pclass.push_back( body );
    } // end of for()

    cout << "\n\n ���� ������  ------ \n" ;
    outclass( Pclass ) ;

    cout << "\n\n ������ ���� ������  Sorting() ------ \n" ;
    sort( Pclass.begin(), Pclass.end(), myfun ) ;
    outclass( Pclass ) ;

    cout << "\n\n ù ������ ������ Sorting() ------ \n" ;
    sort( Pclass.begin(), Pclass.end(), yourfun ) ;
    outclass( Pclass ) ;

    cout << "\n\n ��ü ������ vector��  Sorting() ------ \n" ;
    sort( Pclass.begin(), Pclass.end(), herfun ) ;
    outclass( Pclass ) ;

} // end of main ( )
