#include <stdio.h>
int main()
{
   int num1, num2, flag_var, i, j;
   scanf("%d %d", &num1, &num2);
   for(i=num1+1; i<num2; ++i)
   {
      flag_var=0;
      for(j=2; j*j<=i; ++j) //21  => 21/2 =10
      {
         if(i%j==0)
         {
            flag_var=1;
            break;
         }
      }
      if(flag_var==0)
         printf("%d\n",i);
  }
  return 0;
}