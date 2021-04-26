#include<stdio.h>
#include<string.h>
void PrintString(char *s, int start, int end){
    for(int i=start;i<=end;i++){
        printf("%c",s[i]);
    }
}

void LongestPalindrome(char *s){
    int l, h;
    int start= 0 ,end=1;
    for(int i=1;i<strlen(s);i++){
        //even substring
        l=i-1;
        h=i;
        while(l>=0 && h<strlen(s) && s[l] == s[h]){
            if(h-l+1>end){ // length of the currnet substring is greater than the previous one than
                    start = l;
                    end= h-l+1;
                }
                l--;
                h++;
            }

            //odd substring

            l=i-1;
            h=i+1;
        while(l>=0 && h<strlen(s) && s[l] == s[h]){
            if(h-l+1>end){
                    start = l;
                    end= h-l+1;
                }
                l--;
                h++;
            }
    }
    PrintString(s, start, start+end-1);
}
int main(){
    char s[10] = "abab";
    LongestPalindrome(s);

    return 0;
}