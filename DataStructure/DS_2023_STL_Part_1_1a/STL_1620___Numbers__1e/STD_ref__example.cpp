#include <iostream>
#include <tuple>
#include <functional>
using namespace std ;

/* ref( )�� Ȱ��
- <functional> �� ������ Ư�� Ÿ���� �����ϴ� ��ü�� �����.
- auto r = ref(var)�� ������ �� �ִ�.
-  r.get() �Ǵ� �ٷ� r�� �ش� �����μ� ���Ǿ� ����.
- &�� �ٸ��� Ÿ�Ը� ���ٸ� ��������� �ٲ� �� �ִ�.
- �ַ� thread�� ���� �Ǵ� bind�� ���ڷ� �Ѱ��� �� ����Ѵ�.
*/

void print(int i) {
    cout << i << '\n';
}

int main() {
    int i = 10;

    auto f1 = bind(print, i);
    auto f2 = bind(print, ref(i));

    i = 20;

    f1(); // 10
    f2(); // 20
}
