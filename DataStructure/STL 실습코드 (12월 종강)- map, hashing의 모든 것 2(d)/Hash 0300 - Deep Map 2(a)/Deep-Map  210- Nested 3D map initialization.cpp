// map�� CodeBlock���� ����Ϸ��� �ݵ�� Comipler���� C+11 �� check�ؾ� �մϴ�.
#include <bits/stdc++.h>
using namespace std ;

int main() {

    map< int, map<int, string>> level2map = {
        {0, { {0, "zero"}, {1, "one"}, {2, "two"  } } },
        {1, { {0, "Ein"},  {1, "Zwei"}, {2, "Drei"} } },
        {3, { {1, "�ϳ�"}, {2, "��"},   {3, "��"  } } }
    };

    auto it= level2map.begin() ;


    return 0;
}
