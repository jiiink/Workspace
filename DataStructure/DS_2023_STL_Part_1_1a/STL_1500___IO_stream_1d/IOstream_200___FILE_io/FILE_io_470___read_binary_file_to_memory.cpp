// reading an entire binary file
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main () {
  streampos size;
  char * memblock;

  ifstream file ("example.bin", ios::in|ios::binary|ios::ate);

  if (file.is_open()) {
    size = file.tellg();
    memblock = new char [size];
    file.seekg (0, ios::beg);
    file.read (memblock, size);
    file.close();

    cout << "\n the entire file content is in memory";
    cout << "\n memblock = " << memblock ;
    cout << "\n memblock[]�� ũ�� : " <<  sizeof(  memblock ) ;// pointer�� ũ��
    cout << "\n  strlen( memblock) : " <<  strlen( memblock) ;
    delete[] memblock;
  }
  else
    cout << "Unable to open file";
  return 0;
}
