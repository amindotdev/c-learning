#include <stdio.h>


/* Write a program that prints its input one word per line */
#define IN 1 
#define OUT 0

int main(){

int ch, state;
state = OUT;

while((ch = getchar()) != EOF){
    if(ch == ' ' || ch == '\n' || ch == '\t') {
      putchar('\n');
      state = OUT;
    }
    else if (state == OUT) {
      state = IN;
      putchar(ch);
    }
    else {
      putchar(ch);
    }
  }

}
