#include <stdio.h>

/*It is a bad practise to bury 'MAGIC NUMBER' like 300 and 20 in a program, they confey little information to someone who might have to read the program later, and they're hard to change in a systematic way*/


#define LOWER 0 /*lower limit of table*/
#define UPPER 300 /*upper limit*/
#define STEP 20 /*step size*/

int main (){

  int fahr;
  
  printf("Fahr\tCelsius\n");
  for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    printf("%3d\t%6.1f\n", fahr, (5.0/9.0) * (fahr - 32));

}


/* The quantities LOWER, UPPER and STEP are symbolic constants, not variables, so they do not
appear in declarations. Symbolic constant names are conventionally written in upper case so
they can ber readily distinguished from lower case variable names. Notice that there is no
semicolon at the end of a #define line. */
