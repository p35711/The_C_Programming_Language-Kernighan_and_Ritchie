#include<stdio.H>

/* 1.5.2 Character Counting */

int main() 
{

  long nc;

  nc = 0;

  while(getchar() != EOF){
    ++nc;
    printf("%ld\n", nc);
  }

  return 0;


}
