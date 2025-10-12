#include <stdio.h>

#define IN 1 /*Inside a word*/
#define OUT 0 /*Outside a word*/

/* Count lines, words, and characters in input */

int main(){

  int ch, nl, nw, nc, state;

  state = OUT; 
  nl = nw = nc = 0;

  while((ch = getchar()) != EOF) {

    ++nc;
    if(ch == '\n')
      ++nl;
    if(ch == ' ' || ch == '\n' || ch == '\t')
      state = OUT;
    else if (state == OUT){
      state = IN;
      ++nw;
    }
  }

  printf("%d %d %d\n", nl, nw, nc);
}
