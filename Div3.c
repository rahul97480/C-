#include<stdio.h>

int main(){
    int i,j;
    for(i=5;i>=1;i--){             ///manage the rows   5 \n 5 \n 5
        for(j=5;j>=1;j--){ 
            if(j>=6-i){
                printf("%d ",j);
            }else{
                printf(" ");
            }                         
        }
        printf("\n");
    }
        
    return 0;
}


/*
5 4 3 2 1
5 4 3 2
5 4 3
5 4
5

Foram Rambhiya2:03 PM
divisible by 4 & 12 in the given range
You2:10 PM
M M R M M R M M R M M R M M R M M R M M R M M R M M R M M R M M R M M R M M R M M R M M R M M R M M
Foram Rambhiya2:29 PM
#include<stdio.h>
void swap(char *str1, char str2)
{
char *temp = str1;
strl = str2;
str2 = str1;
}

int main()
{
char *str1 = "Rahul";
char *str2 = "Gupta";
swap(str1, str2)
printf("str1 is %s, str2 is %s", str1, str2);
getchar();
return 0;
}

Identify errors without executing it.
You2:53 PM
select salary from table where not in ( select min(salary) from table) 
select min(salary) from table where not in ( select min(salary) from table) 
Foram Rambhiya2:54 PM
5 4 3 2 1
5 4 3 2
5 4 3
5 4
*/