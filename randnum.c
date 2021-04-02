#include<stdio.h>
#include<stdlib.h> 
#include<time.h> //time library
int main(){
    int number;
    srand(time(NULL));
    number = rand()%100  ; //the remainder is the random number 
    printf("The number is %d",number);
}