#include <stdio.h>
int main() {
   int i, j, k=0;
   char input, alphabet = 'A';
   scanf("%c", &input);
   for (i = 1; i <= (input - 'A' + 1); ++i) {
      for (j = 1; j <= i; ++j) {
          if(k%2 != 0){
              printf("%d ", i);
              k++;
          }else{
              printf("%c ", alphabet);
          }
         
      }
      ++alphabet;
      printf("\n");
   }
   return 0;
}