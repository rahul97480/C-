#include<stdio.h>
int main(){
    int start, end;
    scanf("%d",&start);
    scanf("%d",&end);
    for(int i=start;i<end;i++){
        if(i%12 == 0 && i%4 == 0){
            printf("%d ",i);
        }else if(i%4 ==0){
            printf("%dX ", i);
        }
    }
    return 0;
}