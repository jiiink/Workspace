// �Է�ȭ�� ticketOO.inp�� �̸��� �� ����� �� �ð��� ��ϵǾ� �ִ�.
// �� ȭ���� ù ���� N�� ������ ������ ��Ÿ����.
#include <iostream>
#include <fstream>
#include <deque>
#include <string>

using namespace std;
class person{
      public:
      string name;
      int    eTime;
      person(string rname, int rTime){
                    name = rname;
                    eTime = rTime;
      }
};

int main(){
    deque <person> mainQ;
    ifstream fin("ticket10.inp");
    int numOfPeople;
    string tempName;
    int tempTime;
    fin >> numOfPeople;

    for(int i = 0 ; i < numOfPeople ; i++){
            fin >> tempName >> tempTime;
            mainQ.push_back(person(tempName,tempTime));
            cout << "\n Name = " << tempName << "  Time = " << tempTime  ;

    } // INP �ε� �� mainQueue�� �ڷ� ���� �Ϸ�.


    fin.close();
    return 0;
}

