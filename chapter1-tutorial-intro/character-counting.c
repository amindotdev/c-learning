#include <stdio.h>

/*character counting program; 1st version*/

int main(){

  long nc;

  nc = 0;

  while(getchar() != EOF)
    ++nc;
  printf("%ld\n", nc);
}
