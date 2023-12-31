#include <bits/stdc++.h>
using namespace std ;

typedef struct {
            string studname ;
            vector <int> reports;
        } Sreport ;  // �л� 1���� ����, �̸��� ���躸�� ���� vector

void show_data( vector< Sreport > IN ){ // �Է� ������ �����ֱ�
    for(auto OneS : IN ) {
        cout << "\n " << OneS.studname ;
        for(auto w: OneS.reports ) {
            cout << " " << w << ", " ;
        }
    }
}

void read_data( vector < Sreport> &X  ){  // �Է� ������ �о vector  allreport�� ������
    int N, score  ;
    string sname ;    // �л��� �̸�
    Sreport onerep ;  // �л��� ������ ������ ���� vector

    cin >> N ;
    for(int i=1; i <= N; i++){
        cin >> sname ;
        onerep.studname = sname ;
        onerep.reports.clear( ) ;
        while( 1 ){
            cin >> score ;
            if( score == 0 ) break ;
            else onerep.reports.push_back( score ) ;
       }
       X.push_back( onerep ) ;  // �� �л��� ���� (�̸�, ���� vector )�� ����,
    } // end of for i

} // end of readdata( )

int main () {
    vector< Sreport > Dreport ; // ��� �л��� report�� ��� vector

    read_data(  Dreport ) ;     // �����͸� �о Dreport�� ����,
    show_data(  Dreport ) ;     // �Է��� ����� �Ǿ����� Ȯ���� ��.

    return 0;
}
