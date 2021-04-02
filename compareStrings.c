#include<stdio.h>
#include<string.h>

int main(){
    char str1[20]= {0}, str2[20];
    int i,j;
    scanf("%s",&str1);
    //scanf("%s",&str2);
    for(i=0;str1[i] != '\0'; i++)
    {
        printf("%c \n", str1[i]);
    }

    return 0;
}