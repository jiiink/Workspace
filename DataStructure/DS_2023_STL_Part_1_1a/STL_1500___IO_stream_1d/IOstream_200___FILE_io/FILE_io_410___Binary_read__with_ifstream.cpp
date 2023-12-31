
#include <iostream>
#include <fstream>
using namespace std;

int main () {
  streampos fbegin, fend;
  ifstream myfile ("example.bin", ios::binary);

  fbegin = myfile.tellg();
  myfile.seekg (0, ios::end);
  fend = myfile.tellg();

  myfile.close();
  cout << "example.bin�� ũ��� : " << (fend - fbegin) << " bytes.\n";

  return 0;
}
