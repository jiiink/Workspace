// source���� ����� code�� ��� ���
// >g++ -S my.cpp
//
int foo(int x){
  ++x ;
  return(x) ;
}

int main(){
  int i ;
  i = 1024 ;
  foo( i ) ;
  return 0;
}
