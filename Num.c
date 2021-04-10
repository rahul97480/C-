#include<stdio.h>
void printDivisiblity(int num1, int num2){
    for(int i=num1; i<= num2; i++){
        if(i%12 == 0 && i%4 == 0){
            printf("B ");
        }else if(i%4 == 0){
            printf("H ");
        }else{
            printf("%d ", i);
        }
    }
}

int main(){
    int num1=0, num2=0;
    scanf("%d", &num1);
     scanf("%d", &num2);
     printDivisiblity(num1, num2);
    return 0;
}