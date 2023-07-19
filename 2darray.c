// 3x2 matrix using nested loop in static init array

#include<stdio.h>
int main()
{
    int a[3][2] = {{1,2,},{4,5},{6,7}};
    int r,c;
    for (int r = 0;  r< 3; r++)
    {
         printf("\n");
        for (int c = 0; c < 2; c++)
        {
            // printf("value of r[%d], c[%d] =%d\n",r,c,a[r][c]);

            printf("%d\t",a[r][c]);
            
        }
       
    }
    return 0;
    

}