#include<stdio.h>
#include<math.h>
int main(){
    int second, third, n;
    scanf("%d",&second);
    scanf("%d",&third);
    scanf("%d",&n);

    int r = third/second; 
    float a = (double) second/(double) r;
    int nth_term = (a * pow(r, n-1));
    printf("%d", nth_term);
    return 0;
}