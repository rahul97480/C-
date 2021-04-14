#include<stdio.h>
void MinimiseString(char *str, int n){
    for(int i=0;i<n-2;i++){
        char c;
        if(str[i]>=str[i+1]){
            if(str[i] == 97 || str[i] == 99){
                if(str[i+1] == 97 || str[i+1] == 99){
                    continue;
                }
            }
            c = str[i];
            str[i] = str[i + 1];
            str[i + 1] = c;
        }
    }
    for(int i=0;i<n;i++){
        printf("%c", str[i]);
    }
}
int main(){
    char str[] = "abaacbac";
    int n = sizeof(str)/sizeof(str[0]);
    MinimiseString(str, n);
    
    
    return 0;
}

//abaacbac ->  abaabcac -> aababcac -> aaabbcac