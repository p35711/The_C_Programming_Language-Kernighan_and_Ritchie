#include<stdio.h>

/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ..., 300;
   floating-point version,
   add for loop

 */


int main()
{
  float fahr;
  int upper, lower, step;

  char* fahrs = "Fahrenheit";
  char* cels = "Celsius";

  lower = 0;   // lower limit of temperature table
  upper = 300; // upper limit of temperature table
  step = 20;   // step size
 
  printf("%3s\t %6s\n", fahrs, cels);

  for(fahr = upper; fahr >= lower; fahr = fahr - step){    
    printf("%5.0f\t\t %6.1f\n", fahr, (5.0/9.0) * (fahr - 32.0));
  }

  return 1;

}
