#include <time.h>
#include <stdio.h>

#define SIZE 256

int main (void) {
  char buffer[SIZE];
  time_t curtime;
  struct tm *loctime;


  curtime = time (NULL); // ���� �ð��� ����ϴ�.
  loctime = localtime (&curtime); // ���� �ð����� �ٲߴϴ�.
  fputs (asctime (loctime), stdout); // ȭ�鿡 ���

  /* Print it out in a nice format. */
  strftime (buffer, SIZE, "Today is %A, %B %d.\n", loctime);
  fputs (buffer, stdout);
  strftime (buffer, SIZE, "The time is %I:%M %p.\n", loctime);
  fputs (buffer, stdout);

  return 0;
}

