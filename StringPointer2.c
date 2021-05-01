#include<stdio.h>
void swap(char *str1, char *str2){
    char *temp = str1;
    str1 = str2;
    str2 = temp;
    printf("The value of str1 from Swap function %s \n",str1);
    //Scope is until Local Variables
}
int main(){
    char *str1 = "Rahul";
    char *str2 = "Gupta";
    swap(str1,str2); //Pass by Reference(A Copy is Passed)
    printf("The value of str1 from main function %s",str1);
    return 0;
}