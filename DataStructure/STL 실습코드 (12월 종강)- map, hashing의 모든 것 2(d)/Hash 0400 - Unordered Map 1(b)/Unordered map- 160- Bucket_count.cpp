// unordered_map::begin/end example
#include <iostream>
#include <unordered_map>
#define  skip (cout << endl)
using namespace std ;

int main () {

  unordered_map<string,string> mymap;
  mymap = {{"Australia","Canberra"},{"U.S.","Washington"},
           {"France","Paris"},  {"���ѹα�","����"}};

  cout << "\n mymap�� ��� ����:\n";
  for ( auto it = mymap.begin(); it != mymap.end(); ++it )
    cout << " " << it->first << ":" << it->second;

  skip ;

  cout << "\n mymap�� buckets�� ��� ����: \n";
  for ( unsigned i = 0; i < mymap.bucket_count(); ++i) {
    cout << "bucket #[ " << i << " ] = ";
    for ( auto local_it = mymap.begin(i); local_it!= mymap.end(i); ++local_it )
      cout << " " << local_it->first << ":" << local_it->second;
      skip ;
  }

  return 0;
}
