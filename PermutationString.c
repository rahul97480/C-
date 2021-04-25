#include<stdio.h>
#include<string.h>
void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void permute(char *a, int l, int r)
{
int i;
if (l == r)
    printf("%s\n", a);
else
{
    for (i = l; i <= r; i++)
    {
        swap((a+l), (a+i)); // swapping the elements by keeping 1 element fixed
        permute(a, l+1, r);//finding all the posiible permutations
        swap((a+l), (a+i)); // backtracking
    }
}
}

int main()
{
    char str[] = "ABC";
    int n = strlen(str);
    permute(str, 0, n-1);
    return 0;
}