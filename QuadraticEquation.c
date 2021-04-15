#include<stdio.h>  
#include<math.h>    
#include<conio.h>  
void main()  
{  
    float x, y, z, det, root1, root2, real, img;  
    scanf("%f %f %f", &x, &y, &z);  
    det = y * y - 4 * x * z;      
    if (det > 0)  
    {  
    root1 = (-y + sqrt(det)) / (2 * x);  
    root2 = (-y + sqrt(det)) / (2 * x);  
    printf("\n Value of root1 = %.2f and value of root2 = %.2f", root1, root2);  
    }  
    else if (det == 0)  
    {  
        root1 = root2 = -y / (2 * x);  
        printf("\n Value of root1 = %.2f and Value of root2 = %.2f", root1, root2);  
    }  
    else {  
        real = -y / (2 * x);  
        img = sqrt(-det) / (2 * x);  
        printf("\n value of root1 = %.2f + %.2fi and value of root2 = %.2f - %.2fi ", real, img, real, img);  
    }  
    }