#include <stdio.h>

int main()
{
    int i = 34;
    int *j = &i;
    printf("The value of i is %d\n", i);
    printf("The value of i from pointer is %d\n", *j);
    printf("The address of i is %d\n", j);
    printf("the address of j is %u\n", &j);
    printf("he value of j is %u\n", *(&j));


    return 0;
}