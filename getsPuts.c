#include<stdio.h>  
void main()   
{   
   char str[20];   
   printf("Enter the string? ");  
   fgets(str, 20, stdin);    //fgets takes only that much as per space doesnot create  memory leakage
   printf("%s", str);  

}  