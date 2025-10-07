#include <stdio.h>

/*Write a program to count blanks, tabs and newlines*/

int main(){


  int blanks, tabs, newlines = 0;

  int ch;

   
  printf("Enter a characters: ");
  while((ch = getchar()) != EOF){
    if(ch == '\n')
      ++newlines;
    if(ch == '\t')
      ++tabs;
    if(ch == ' ')
      ++blanks;
  } 
  printf("newlines: %d, tabs: %d, blanks: %d", newlines, tabs,blanks); 
}
