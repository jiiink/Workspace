// map�� CodeBlock���� ����Ϸ��� �ݵ�� Comipler���� C+11 �� check�ؾ� �մϴ�.
// Have g++ follow the C++11 ISO C++ language standard

#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<"=> ";for(auto w:X)cout<<w<<", "
using namespace std;

int main() {

   map<int, string> Employees;

   Employees[5234] = "Mike C.";
   Employees[3374] = "Charlie M.";
   Employees[1923] = "David D.";
   Employees[7582] = "John A.";
   Employees[5328] = "Peter Q.";
   cout << "Employees[3374]=" << Employees[3374] << endl << endl;
   cout << "Map size: " << Employees.size() << endl;

   cout << "map�� ��� ���ҿ� ���Ͽ� (Key, value)�� ����Ѵ�. \n\n" ;
   //ii�� map��  iterator
   for( auto ii = Employees.begin(); ii !=Employees.end(); ++ii) { // ���� ���
        cout << (*ii).first << ": " << (*ii).second << endl;
   }

   for(auto w : Employees) {
         printf("\n w.first= %d, %s ", w.first, w.second.c_str() ) ;
   }
   //allout(" Emplyees<>= ", Employees) ;

} // end of main()
