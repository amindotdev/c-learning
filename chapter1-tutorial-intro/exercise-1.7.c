#include <stdio.h>

/*Write a program to print the value of EOF*/

int main(){


  int ch;

  printf("Enter a character: ");
  while((ch = getchar()) != EOF)
    putchar(ch);
  printf("\nValue of EOF is: %d\n", EOF);

}
