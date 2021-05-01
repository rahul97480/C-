#include<stdio.h>
int main(){
    int num1,num2;
    scanf("%d", &num1);
    scanf("%d", &num2);
    for(int i=num1;i<num2;i++){
        if(i%12 ==0){
            printf("R ");
        }else if(i %4 ==0){
            printf("M ");
        }else{
            printf("%d ", i);
        }
    }
    return 0;
}
//12 - 1 2 3 4 6 12 
//div /4 Print "M"
//div/ 12 Print "F"

//36 - 12 & 4
//40 = M 
//44 = M
//48 = R

