#include <stdio.h>

/*copy input to output; 2nd version*/

int main(){

  int c;

  printf("Enter character (Ctrl+C to stop): \n");
  while((c = getchar()) != EOF) {
    putchar(c);
  }
}
