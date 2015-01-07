#include<stdio.h>
#include <stdlib.h>

/* 1.5.3  Count Line Input */

/* 
   Exercise 1-9
   Write a progarm to copy its input ot its output,
   replaceing each string of one or more blanks by 
   a single blank.
 */

int main() 
{

  int c;

  FILE *fp;

  fp = fopen("1_6_input","r");
  while((c = fgetc(fp)) != EOF)
     putchar(c);
  fclose(fp);

  fp = fopen("1_6_input", "r");
  
  while((c = fgetc(fp)) != EOF){  
     
    if (c == ' ') {
       putchar(' ');
       putchar('\b');
       putchar(' ');
    } else if (c == '\t') {
        putchar(' ');
        putchar('\b');
     } else {
          putchar(c);
     }
  }    

  fclose(fp);

  return 0;

}
