#include <stdio.h>


/*Verify that the expression getchar() != EOF is 0 or 1*/


int main() {


  int ch, vEOF;

  printf("Enter a character: ");

  ch = getchar();

  vEOF = (ch != EOF);

  printf("Experession 'getchar() != EOF' is: %d\n", vEOF);
}



