#include<stdio.h>
void checkPalindrome(int num){
    int n = num, rev = 0;
    while ( n != 0){
        int d = n%10;
        rev = rev*10 + d;
        n = n/10;
    }if(rev == num){
        printf("%d is a palindrome.", rev);
    }else{
         printf("%d is not a palindrome.", num);
    }
}
int main(){
    int num;
    scanf("%d",&num);
    checkPalindrome(num);
    return 0;
}