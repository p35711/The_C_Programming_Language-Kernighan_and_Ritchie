#include<stdio.H>

/* 1.5.3  count line input
*/

/* Exercise 1-10 */

int main() 
{

  int c;
  double  nl = 0;
  double t = 0;
  double bs = 0;
  FILE *fp;


  fp = fopen("1_6_input","r");

  while((c = fgetc(fp)) != EOF)
    switch(c) {
    case('\n'):
      printf("\\n");
      ++nl;
      break;
    case('\t'):
      printf("\\t");
      ++t;
      break;
    case(' '):
      printf("\b");
      ++bs;
      break;
    case('\\'):
      printf("\\");
      break;
    default:
      printf("%c", c);
      break;

    }    

  printf("\nnl %.0f, t %.0f, bs %.0f \n", nl, t, bs);

  fclose(fp);

  return 0;

}
