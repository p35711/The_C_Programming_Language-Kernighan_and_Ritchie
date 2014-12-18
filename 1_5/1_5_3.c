#include<stdio.H>

/* 1.5.3  count line input
*/

int main() 
{

  int c, nl;
  
  FILE *fp;

  nl = 0;

  fp = fopen("1_6_input","r");

  while((c = fgetc(fp)) != EOF)
    if(c == '\n')
      ++nl;

  printf("%.d\n", nl);

  fclose(fp);

  return 0;

}
