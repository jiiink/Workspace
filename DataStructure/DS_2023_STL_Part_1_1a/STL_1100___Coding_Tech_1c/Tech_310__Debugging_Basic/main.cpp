/*  Debug�� ����Ϸ��� Debug directory�� �־�� �ϹǷ�
    �ݵ�� project�� �����ؾ� �Ѵ�.

    ���� Debug Mode�� Release Mode �����ϱ�
    Build >> Select Target >> { Release, Debug } ����

    ����Ÿ� �̿��� �迭�� ����ִ� ���� �ٲ�� ���� Ȯ���մϴ�.
    1.  breakPoint �����
        Ư���� ���ϴ� ����� ������ �ִٸ�, ���ʿ� �� ��ȣ ��(�ٷ� ������) ������
        ���콺�� Ŭ���ϸ� breakPoint�� �����˴ϴ�(���� ���׶��).
        ������ breakPoint�� �ٽ� Ŭ���ϸ� �����˴ϴ�.

    2.  [Debug]-[Start/Continue]�� ������(F8) �ش� breakPoint���������� ������ �� �ֽ��ϴ�.

    3.  ���� Ȯ��
        [Debug]-[Debugging Windows]-[Watches]�� Ŭ���ϸ� ����� ���������� �������� Ȯ���� �� �ֽ��ϴ�.

    4.  ����� ��� ����
        [Debug]-[stop Debugger]Ŭ���ϸ� (Shift+F8) ����� ��尡 ����˴ϴ�.
    5.  ���δ��� �����
        �ҽ��ڵ忡�� �� ������ �������� �˰� ���� ���,
        [Debug]-[Next line]�� Ŭ���ϸ�(F7) ���� �ٱ��� ������ ����� �� �� �ֽ��ϴ�(��� �ﰢ��).
        (breakPoint�� ������ �� ����ϸ�, breakPoint ���� �� ���� ���� ���� �������� �� �� �ֽ��ϴ�)
    6.  Step-Into, �� ���� �ƴ϶� �� �پȿ��� ���� �ܰ�ε� �� �� �ִ�.
        ��ɾ�� SHIFT-F7 �̴�.
    7.  [View]-[Toolbars]-[Debugger]�� ���ٿ� ����� ���������� �̿��ؼ� ���� �۾��� �� �� �ֽ��ϴ�.

    8.  �����Ϸ��� �ݵ�� ������ �ﰢ�� Bebug/Continue�� �����ؼ� ���� �Ѵ�.

*/

#include <stdio.h>
#include <iostream>
using namespace std ;


int main() {
    int i,bit,n ;
    int memory[15] ;

    n= 1000 ; bit=0 ;

    while( n > 1 ){
        memory[ bit++ ] = n ;
        n = n / 2 ;
        cout << ">> n = "<< n  << endl ;
    }

    return 0 ;
}
