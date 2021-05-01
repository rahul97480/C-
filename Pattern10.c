#include<stdio.h>
int main(){
    int i,j;
    for(i=1;i<=4;i++){
        char a='A';
        for(j=1;j<=7;j++){
            if(j>=5-i+1 && j<=2+i){
                printf(" ");
                if(j==4)
                    a--;
            }else{
                printf("%c",a);
                j<4?a++:a--;
            }   
        }
        printf("\n");
    }
    return 0;
}
/*
ABCDCBA
ABC CBA
AB   BA
A     A
*/