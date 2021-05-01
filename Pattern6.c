#include<stdio.h>
int main(){
    for(int i=1;i<6;i++){
        int k = 1;
        for(int j=1;j<11;j++){
            if(j>=6-i && j<= 4+i){
                if(j<5){
                    printf("%d",k);
                    k++;
                }else{
                    printf("%d",k);
                    k--;
                }
                
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
/*
    1     
   121
  12321
 1234321
123454321
*/