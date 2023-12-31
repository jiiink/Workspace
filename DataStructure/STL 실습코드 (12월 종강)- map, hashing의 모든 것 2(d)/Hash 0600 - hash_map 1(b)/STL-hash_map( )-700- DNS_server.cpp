//   A Simple DNS server �����ϱ� : hash�� �̿��ؼ� ���� ������ ã�Ƴ� �� �ִ�.

#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

struct {const char * first; unsigned second; } sites[] = {
     {"www.pusan.co.kr",    0x10203040}, // 16�������� ǥ���� �մϴ�.
     {"www.lpacampus.com",  0x20304050},
     {"www.microsoft.com",  0x99999999},
     {"www.borland.com",    0xbbbbbbbb},
     {"algorigene.ac.kr",   0x067ab050},
     {"pearl.pusan.ac.kr",  0xb7456345},
     {"www.naver.com",      0x0cc2f738},
     {"www.amazon.com",     0xf5760788},
     {"www.maxplus.com",    0x12345678}, // �̷� ���� �� 1000���� ���� �ȴٰ� �غ���.
};

int main(){
     map<string,unsigned> dns;
     // int i;

     for (int i=0; i<9; i++) {
          dns[sites[i].first]=sites[i].second;
     }

     dns["www.beer.com"] = 0x16348678 ;
     map<string,unsigned>::iterator it;
     it=dns.find("www.amazon.com");

     if (it == dns.end() ) { cout << "��ϵ��� ���� ����Ʈ�Դϴ�." << endl; }
     else                  { cout << it->first << "�� �ּҴ� " << it->second << "�Դϴ�." << endl; }
     // end of else

     string instr ;
     instr = "www.beer.com" ;
     cout << "�� �� " << dns[instr] ;
} // end of main ( )

