#include <iostream>
#include <iomanip>
using namespace std ;



int main(void) {
        int a = 1234567890;
        int b = 1;
        int c = 22;

        // 10�ڸ� ���� Ȯ�ο�.
        std::cout << a << std::endl;


        // setw�� �̿��ؼ� 10���� ��ŭ ���
        std::cout << std::setw(10) << b << std::endl;
        std::cout << std::setw(10) << c << std::endl;


        // ���� ������
        std::cout << std::setw(10) << std::left << b << std::endl;
        std::cout << std::setw(10) << std::right << c << std::endl;


        // ���� ��� ����
        std::cout << std::left;
        std::cout << std::setw(10) << b << std::endl;
        std::cout << std::setw(10) << c << std::endl;


        // ������ ��� ����
        std::cout << std::right;
        std::cout << std::setw(10) << b << std::endl;
        std::cout << std::setw(10) << c << std::endl;

        return 0;
}
