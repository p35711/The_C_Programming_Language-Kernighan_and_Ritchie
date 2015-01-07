#include<stdio.h>

/* Copy input to output
   version 2
 */

int main()
{

  int c;

// Exercise 1-7

  printf("The value of EOF is %i\n", EOF);

  while ((c = getchar()) != EOF) {
    putchar(c);
  }



   return 1;
}
