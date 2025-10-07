#include <stdio.h>

/* Copy input to output; 1st version */

int main(){
  int c;

  printf("Enter a characters (Ctrl+C to stop):\n");
  c = getchar();
  while (c != EOF) {
    putchar(c);
    c = getchar();
  }
}
