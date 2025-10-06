#include <stdio.h>

/* print converstion table of celsius to fahreinheit */ 
int main(){


  float celsius, fahr;
  float lower, upper, step;

  lower = 0;
  upper = 100;
  step = 1;

  celsius = lower;
  printf("celsius\tFahr\n");
  while(celsius<=upper){

  fahr = (celsius * (9.0/5.0) + 32);
  printf("%6.1f\t%3.1f\n", celsius, fahr);

  celsius += step;
  }
}
