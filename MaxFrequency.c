#include<stdio.h>

main()
{
    int n,arr[10000],i,j,a,count,max=0;
    scanf("%d",&n);
for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                if(count>max)
                {
                    max=count;
                    a=arr[i];
                }
            }
        }
    }
    printf("%d",a);
}