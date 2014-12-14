#include<stdio.h>

/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ..., 300;
   floating-point version
 */

// Exercise 1-4

int main()
{
  float fahr, celsius;
  int upper, lower, step;

  char* fahrs = "Fahrenheit";
  char* cels = "Celsius";

  FILE *fp;

  lower = 0;   // lower limit of temperature table
  upper = 300; // upper limit of temperature table
  step = 20;   // step size
  fahr = lower;

  fp = fopen("output.txt","w");

  fprintf(fp, "%3s\t %6s\n", fahrs, cels);
  
  while(fahr <= upper){
    celsius = (5.0/9.0) * (fahr - 32.0);
    fprintf(fp, "%5.0f\t\t %6.1f\n", fahr, celsius);
	   fahr = fahr + step;
  }

  fclose(fp);

  return 1;

}
