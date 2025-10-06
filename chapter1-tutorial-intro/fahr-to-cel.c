#include <stdio.h>

/* print Fahrenheit-celsius table
 for fahr = 0, 20, ... 300 */

int main(){
 /*for precise accurate use float instead of int*/
  float fahr, celsius;
  float lower, upper, step;

  lower = 0; /* lower limit of temp scale */
  upper = 300; /*uper limit*/
  step = 20; /* step size */

  fahr = lower;
 printf("Fahr\tCelsius\n");
  while(fahr<=upper){
    /* do the conversion */
    /*celsius = 5 * (fahr - 32) / 9;*/
    /*celsius = 5 / 9 * (fahr-32); /*this causes integar to truncate and hallucinate giving us wrong conversion*/
    /*float conversion */
      celsius = (5.0/9.0) * (fahr - 32.0);

    /* print the converted table - when in int*/
    /*printf("%d\t%d\n", fahr, celsius);*/
    printf("%3.0f\t%6.1f\n", fahr, celsius);
    /* jump 20 */
    fahr += step;
  }
}
