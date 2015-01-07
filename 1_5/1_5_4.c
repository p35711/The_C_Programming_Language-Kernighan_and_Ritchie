#include <stdio.h>

#define IN  1  // the state of being inside a word
#define OUT 0  // the state of being outside a word

// count lines, words, and characters in input

int main(int argc, char** argv) 
{

   int c, nl, nw, nc, state;

   state = OUT;
   nl = nw = nc = 0;

   while((c = getchar()) != EOF) {
     ++nc;
     if(c == '\n')
       ++nl;
     if(c == ' ' || c == '\n' || c == '\t') {
       state = OUT;
     }
     else if(state == OUT) {
       state = IN;
       ++nw;
     }

   }

     printf ("\nLines: %d\nWords: %d\nCharacters: %d\n\n", nl, nw, nc);

  return 0;
}
