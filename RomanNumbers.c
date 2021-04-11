#include<stdio.h>
#include<string.h>
int value(char r)
{
    if (r == 'I')
        return 1;
    if (r == 'V')
        return 5;
    if (r == 'X')
        return 10;
    if (r == 'L')
        return 50;
    if (r == 'C')
        return 100;
    if (r == 'D')
        return 500;
    if (r == 'M')
        return 1000;

    return -1;
}

// Returns decimal value of
// roman numaral
int romanToDecimal(char *str, int n)
{
    int res = 0;
    for (int i = 0; i < n; i++) 
    {
        int s1 = value(str[i]);

        if (i + 1 < n) 
        {
            int s2 = value(str[i + 1]);
            if (s1 >= s2) 
            {
                res = res + s1; //1000
            }
            else
            {
                res = res + s2 - s1;//1900
                i++;
            }
        }
        else {
            res = res + s1;
        }
    }
    return res;
}
int main()
{
    char *str = "MCMIV";
    int n = strlen(str);
    printf("%d",romanToDecimal(str,n)); 

    return 0;
}