/*
  argc, argv�� �ܺο��� ���α׷��� ����, option�� �־��� �� �ִ� ����̴�.

  Option�� ���� ��쿡�� Project > Set Program Argument�� ä��� �ȴ�.
  ������� �ܺο��� exe�� ������ �� Option�� �� �� �ִ�.
  ���濡�� source�� ���� �ʰ� .. ��

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
  for (int i = 1; i < argc; i++)
    printf("argv[%d] = %s\n", i, argv[i]);

  return 0;
}
