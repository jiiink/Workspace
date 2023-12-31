/*
    Debug Mode�� Release Mode �����ϱ�
    Build >> Select Target >> { Release, Debug } ����


    ����Ÿ� �̿��� �迭�� ����ִ� ���� �ٲ�� ���� Ȯ���մϴ�.
    1.  breakPoint �����
        Ư���� ���ϴ� ����� ������ �ִٸ�, ���ʿ� �� ��ȣ ��(�ٷ� ������) ������ ���콺�� Ŭ���ϸ� breakPoint�� �����˴ϴ�(���� ���׶��).
        ������ breakPoint�� �ٽ� Ŭ���ϸ� �����˴ϴ�.

    2.  [Debug]-[Start/Continue]�� ������(F8) �ش� breakPoint���������� ������ �� �ֽ��ϴ�.
         Shift-F7�� ������ Step �� �����Ȳ�� �� �� �ִ�.

    3.  ���� Ȯ��
        [Debug]-[Debugging Windows]-[Watches]�� Ŭ���ϸ� ����� ���������� �������� Ȯ���� �� �ֽ��ϴ�.

    4.  ����� ��� ����
        [Debug]-[stop Debugger]Ŭ���ϸ� (Shift+F8) ����� ��尡 ����˴ϴ�.

    5.  ���δ��� �����
        �ҽ��ڵ忡�� �� ������ �������� �˰� ���� ���,
        [Debug]-[Next line]�� Ŭ���ϸ�(F7) ���� �ٱ��� ������ ����� �� �� �ֽ��ϴ�(��� �ﰢ��).
        (breakPoint�� ������ �� ����ϸ�, breakPoint ���� �� ���� ���� ���� �������� �� �� �ֽ��ϴ�)

    #.  [View]-[Toolbars]-[Debugger]�� ���ٿ� ����� ���������� �̿��ؼ� ���� �۾��� �� �� �ֽ��ϴ�.
*/

#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

void printArr(int arr[], int arr_size) {
    for(int i=0; i<arr_size; ++i)
        cout << arr[i] << ' ';
    cout << endl;
}

int main() {
    cout << "** CodeBlocks Debugger �ǽ� **\n";
    int num_arr[5] = {2,10,4,1,8};
    int cur_max_num = -1;
    int cur_max_idx = -1;

    cout << "���� �迭 :" << endl;
    printArr(num_arr,5);

    while(cur_max_num != 0) {
        for(int j=0; j<5; ++j)
            if(num_arr[j]>cur_max_num) {
                cur_max_num = num_arr[j];
                cur_max_idx = j;
            }
        if(num_arr[cur_max_idx]!=0) {
            cout << "���� ū ���� "<< cur_max_num <<"�� 0���� �ٲߴϴ�." << endl;
            num_arr[cur_max_idx] = 0;
            cur_max_idx = -1;
            cur_max_num = -1;
            printArr(num_arr,5);
        }
    }
    return 0;
}

