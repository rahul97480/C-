
#include<stdio.h> 
  
int main() 
{  
    int a = 5; 
    char *ptr ; 
    ptr = &a; 
    //a = *ptr * 3; 
    printf("%d", ptr + 2); 
  
    return 0; 
} 