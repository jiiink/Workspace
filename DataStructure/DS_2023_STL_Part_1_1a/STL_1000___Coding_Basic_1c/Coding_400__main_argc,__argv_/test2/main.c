/*
  argc, argv�� �ܺο��� ���α׷��� ����, option�� �־��� �� �ִ� ����̴�.

 1. �ݵ�� project�� �����ؼ� �����ؾ� �Ѵ�.
 2. argv   Option�� ���� ��쿡��
     ���� ���� �޴� Project �� �����ؼ�

     Project > Set Program Argument�� ä��� �ȴ�.

  3. �ܼ� Shell���� *.exe�� ������ �� command line���� argv option�� �� �� �ִ�.
     ���濡�� source�� ���� �ʰ� .. ��

  4. ��
  game.exe -{easy, medium, hard}
  work.exe  -silent      (��¹��� ��� ���� )

*/

#include <stdio.h>
#include <stdlib.h>  // exit()

int main(int argc, char* argv[]) {


  if (argc == 1) { // argc�� ��ɾ� �ٿ� ���õ� token�� ��.
    fputs("����! �ɼ��� �Է����� �����̱���...\n", stderr);
    exit(1);
  }


  // �ɼ� ���� ���
  printf("%d ���� �ɼ��� �Է��ϼ̱���\n\n",  argc-1);


  // �ɼ� �迭�� ��ҵ��� �ϳ��� ���
  for (int i = 0; i < argc; i++)
    printf("argv[%d] = %s\n", i, argv[i]);

  return 0;
}
