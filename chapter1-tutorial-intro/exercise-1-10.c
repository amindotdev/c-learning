#include <stdio.h>

/*Write a program to copy its input to output, replacing each tab by \t, backspace by \b and backslash by \\. this makes tabs and backspaces visible in an unambiguos way.*/

int main(){

  int ch;
  
  printf("Enter a characters: ");
 while((ch = getchar()) != EOF){
    if(ch == '\t'){
      putchar('\\');
    }     
    if(ch == '\b')
        putchar('\b');
    if(ch == '\\')
       putchar('\\');
  putchar(ch);
  }
}
