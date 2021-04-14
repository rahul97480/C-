#include <stdio.h>
// function to calculate sum of
// geometric series
float sumgeometric(float a, float r, int n){
   float sum = 0;
   for (int i = 0; i < n; i++){
      sum = sum + a;
      a = a * r;
   }
   return sum;
}
int main(){
   int a = 2; // first term
   float r = 2; // their common ratio
   int n = 15; // number of terms
   printf("%f", sumgeometric(a, r, n));
   return 0;
}