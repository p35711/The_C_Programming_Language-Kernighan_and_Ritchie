#include<stdio.h>

/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ..., 300;
   floating-point version,
   add for loop,
   add symbolic constants

 */

#define LOWER 0      // lower limit of table
#define UPPER 300    // upper limit of table
#define STEP 20      // step size

int main()
{
  float fahr;

  char* fahrs = "Fahrenheit";
  char* cels = "Celsius";

  printf("%3s\t %6s\n", fahrs, cels);

  for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP){    
    printf("%5.0f\t\t %6.1f\n", fahr, (5.0/9.0) * (fahr - 32.0));
  }

  return 1;

}
