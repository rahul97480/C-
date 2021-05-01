#include<stdio.h>  
void main()   
{   
   char str[20];   
   printf("Enter the string? "); 
   gets(str);
   //fgets(str, 20, stdin);    //fgets takes only that much as per space doesnot create  memory leakage
   puts(str);  //displays string    
   //printf("%s", str);  

}  