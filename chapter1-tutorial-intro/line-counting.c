#include <stdio.h>

/* count lines in inpput */

int main(){

  int c, nl;

  nl = 0;
  printf("Enter a characters: ");
  while((c = getchar()) != EOF)
    if(c == '\n')
      ++nl;
  printf("%d\n", nl); 
}
