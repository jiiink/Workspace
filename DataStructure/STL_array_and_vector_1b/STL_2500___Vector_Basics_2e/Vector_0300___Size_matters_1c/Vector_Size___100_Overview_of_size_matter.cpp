/* Vector �ڷᱸ���� ����Ǵ� Operation.

size		���� ������ ����Ѵ�. ũ�Ⱑ �ƴϰ� ������, ����.... �¼��� ���� ����ϴ� ���̴�.

max_size	���Ͱ� ������ �� �ִ� �ִ� ��� ������ �����Ѵ�.

capacity	�Ҵ�� ��� ������ ���Ѵ�. ��ü ������ �ƴ϶�, �ڸ��� ���� �մ��� �Ի��ϴ� ���̴�.

resize(n)	ũ�⸦ �����Ѵ�. �Ĵ� �ڸ��� �� ���̼��� ���δ�. .
		�� ũ�Ⱑ �� Ŭ ��� ������ ���� ������ �����ϸ� ���� �Ҵ�� ��Ҵ� 0���� �ʱ�ȭ�ȴ�.

reserve(n)  �ּ����� ũ�⸦ �����ϸ� �޸𸮸� �̸� �Ҵ��� ���´�. (����� ���ڸ� �Ĵ翡 �߰�)
            �� ũ�Ⱑ �� Ŭ ��� ������ ���� ������ �����Ѵ�. ���� �Ҵ�� ��Ҵ� �ʱ�ȭ���� �ʴ´�.
            �ֱ�ȭ ���� �ʴ´�. �̰� ����϶�. ���ϰ� �ʱ�ȭ�� ��������. �ǽɳ��� Ȯ��

clear(n)	��� ��Ҹ� �����ϰ� ũ�⸦ 0�� �����. �Ĵ� �մ��� �� �����Ų��.
          �Ĵ��� �ı��ϴ� ���� �ƴϴ�. �մԸ� OUT !

empty	��� �ִ��� �����Ѵ�.  */

#include <bits/stdc++.h>
using namespace std;

int main() {
     vector<int> vi {91, 92, 93 };

     printf("max_size = %d\n",vi.max_size());
     printf("size = %d, capacity = %d\n",vi.size(),vi.capacity());

     vi.push_back(123);
     vi.push_back(456);
     cout << "\n �ι��� push_back( ) ���� \n" ;
     printf("size = %d, capacity = %d\n",vi.size(),vi.capacity());

     vi.resize(10);
     cout << "\n vi.resize(10) ���� \n" ;
     printf("size = %d, capacity = %d\n",vi.size(),vi.capacity());
     vi.reserve(20);
     cout << "\n vi.reserve(20) ���� \n" ;
     printf("size = %d, capacity = %d\n",vi.size(),vi.capacity());

     vi.clear() ;
     cout << "\n vi.clear( ) ���� \n" ;
     printf("size = %d, capacity = %d\n",vi.size(),vi.capacity());

     vi.reserve(100);
     cout << "\n �ٽ� reserve(100) ���� \n" ;
     printf("size = %d, capacity = %d\n",vi.size(),vi.capacity());

} // end of main( )



