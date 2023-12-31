// map�� CodeBlock���� ����Ϸ��� �ݵ�� Comipler���� C+11 �� check�ؾ� �մϴ�.
// Have g++ follow the C++11 ISO C++ language standard

#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<"=> ";for(auto w:X)cout<<w<<", "
using namespace std;

int main() {

   map< float, string> Employees;
   float Tf ;

   Employees[52.34] = "Mike C.";
   Employees[3.374] = "Charlie M.";
   Employees[192.3] = "David D.";
   Employees[758.2] = "John A.";
   Employees[0.5328] = "Peter Q.";
   cout << "Employees[3.374]=" << Employees[3.374] << endl << endl;
   cout << "Map size: " << Employees.size() << endl;

   cout << "map�� ��� ���ҿ� ���Ͽ� (Key, value)�� ����Ѵ�. \n\n" ;
   //ii�� map��  iterator
   for( auto ii = Employees.begin(); ii !=Employees.end(); ++ii) { // ���� ���
        cout << (*ii).first << ": " << (*ii).second << endl;
   }

   cout << "\n map[]�� ���ο� ��� ��� - " ;
   for(auto w : Employees) {
         printf("\n w.first= %f, %s ", w.first, w.second.c_str() ) ;
   }
   //allout(" Emplyees<>= ", Employees) ;

} // end of main()
