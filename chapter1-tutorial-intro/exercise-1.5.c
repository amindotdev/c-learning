#include <stdio.h>

int main(){

  /* Modify the temperature conversion program to print the in reverse order, that is, from 300 degrees to 0. */
/* Whats up?*/
  int fahr;

  for(fahr = 300; fahr >= 0; fahr = fahr - 20)
    printf("%3d\t%6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
}
