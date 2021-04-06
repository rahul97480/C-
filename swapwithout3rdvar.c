#include<stdio.h>
int main(){
    int a=2, b=5;
    b = a+b; //5+2=7
    a = b-a; //7-2=5
    b = b-a; //7-5=2
    printf("a is %d, \n b is %d",a, b);
    return 0;
}