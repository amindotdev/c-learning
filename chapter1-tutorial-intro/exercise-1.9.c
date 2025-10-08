#include <stdio.h>

/* Write a program to copy its input to output, replacing each string of one or more blanks by a single blank. */

int main()
{

  int ch, last;

  last = 0;

  while((ch = getchar()) != EOF){
    if(ch != ' ' || last != ' ')
      putchar(ch);
    last = ch;
  }
}
