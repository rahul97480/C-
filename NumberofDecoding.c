#include <stdio.h>
#include<string.h>
int NumberDecodings(char *str){
    int n = strlen(str);
    if(n == 0 || str[0] == '0'){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    int count1 = 1, count2 = 1;
    for(int i=1; i<n; ++i){
        int d = str[i] - '0';
        int dd = (str[i-1] - '0')*10 + d;
        int count = 0;
        //only the digit 
        if(d>0){
            count += count2;
        }
        //with previous number 
        if( dd >= 10 && dd <= 26){
            count += count1;
        }
        count1 = count2;
        count2 = count;
    }
    return count2;
}

int main()
{
    char *str= "123";
    printf("%d",NumberDecodings(str));
    return 0;
}
