// regex_replace example
#include <iostream>
#include <string>
#include <regex>
#include <iterator>
using namespace std;

int main ()
{
  string s ("this subject has a submarine as a subsequence");
  smatch m;
  regex e ("\\b(sub)([^ ]*)");   // matches words beginning by "sub"

  cout << "Target sequence: " << s << endl;
  cout << "Regular expression: /\\b(sub)([^ ]*)/" << endl;
  cout << "The following matches and submatches were found:" << endl;

  while (regex_search (s,m,e)) {
    for (auto x:m) cout << x << " ";
    cout << endl;
    s = m.suffix().str();
  }

  return 0;
}
