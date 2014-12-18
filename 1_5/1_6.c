#include<stdio.h>

/* Copy input to output
   version 2
 */

int main()
{

  int c;

// Exercise 1-6

  FILE *fp = fopen("1_6_input", "r");

   do {
         c = fgetc(fp);
	 if(c == EOF) {
           printf("%i\n", c == EOF);
	 }

   } while (c != EOF);

   fclose(fp);

   return 1;
}
