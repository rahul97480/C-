#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if( j==i || j == 6-i){
                if(i==j)
                    printf("\\");
                else
                    printf("/");
            }else{
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}


// \***/
// *\*/*
// **\**
// */*\*
// /***
