#include <stdio.h>
#include<string.h>

char helper(char *s){
   int arr[26]={0};
   for(int i=0;i<strlen(s);i++){
    arr[s[i]-97]++; //
    }
    char  *result = "";
    for(int i=0;i<26;i++){
    if(arr[i]>0) 
{
        char ch = 97+i; 
        result+=ch;
        result+=(arr[i]);
        }
    }
    printf("%d",*result);
}

int main() {

    char *s= "phggpq";
    helper(s);

    return 0;
}