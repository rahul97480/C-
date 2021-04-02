#include<stdio.h>
void fun(int *n){
    printf("%d", *n);
}
int main(){
    int n;
    scanf("%d",&n);
    fun(&n);
    return 0;
}