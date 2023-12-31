// map�� CodeBlock���� ����Ϸ��� �ݵ�� Comipler���� C+11 �� check�ؾ� �մϴ�.
// Have g++ follow the C++11 ISO C++ language standard

#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<"=> ";for(auto w:X)cout<<w<<", "
using namespace std;

int main() {

   map<string, string> Ger2Eng;

   Ger2Eng["one"] = "ein";
   Ger2Eng["beer"] = "Bier";
   Ger2Eng["station"] = "Bahnhof";
   Ger2Eng["pizza"] = "Pizza";
   Ger2Eng["room"] = "Raum";
   Ger2Eng["football"] = "FussBall";


   for(auto w : Ger2Eng) {
         printf("\n ���� = %10s, ���Ͼ� = %10s ", w.first.c_str(), w.second.c_str() ) ;
   }
   //allout(" Emplyees<>= ", Ger2Eng) ;

} // end of main()
