#include <iostream>
#include <iterator>
using namespace std;

int main() {

    // create istream iterator that reads integers from cin
    istream_iterator<int> intReader(cin);

    // create end-of-stream iterator
    istream_iterator<int> intReaderEOF;

    // EOF�� �ƴҶ� ���� �Է��ϰ� 2�� ��� ��.
    cout << "1. ���ڿ��� �Է��Ͻÿ�: " ;
    while (intReader != intReaderEOF) {
        cout << "2. ���ڿ��� �Է��Ͻÿ�: " ;
        cout << "�Է� ���ڿ� =     " << *intReader << endl;
        cout << "�ѹ��� ��� =   " << *intReader << endl;
        ++intReader;
    }
}
