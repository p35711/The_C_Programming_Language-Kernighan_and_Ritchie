#include<stdio.H>

/* 1.5.2 Character Counting 
   version 2 with for and double
*/

int main() 
{

  double nc;
  
  FILE *fp;

  fp = fopen("1_6_input","r");

  for (nc = 0; fgetc(fp) != EOF; ++nc)
    ;

  printf("%.0f\n", nc);

  fclose(fp);

  return 0;

}
