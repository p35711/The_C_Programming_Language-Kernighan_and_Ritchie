#include<stdio.H>

/* 1.5.3  count line input
*/

/* Exercise 1-8 */

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
      ++nl;
      break;
    case('\t'):
      ++t;
      break;
    case(' '):
      ++bs;
      break;
    default:
      break;

    }    

  printf("nl %.0f, t %.0f, bs %.0f \n", nl, t, bs);

  fclose(fp);

  return 0;

}
