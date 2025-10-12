#include <stdio.h>

/*Write a program to copy its input to output, replacing each tab by \t, backspace by \b and backslash by \\. this makes tabs and backspaces visible in an unambiguos way.*/

int main(){

  int ch;
  
  printf("Enter a characters: ");
 while((ch = getchar()) != EOF){
    if(ch == '\t')
      printf("\\t");
    else if(ch == '\b')
        printf("\\b");
    else if(ch == '\\')
       printf("\\\\");
    else
       putchar(ch);
  }
}
