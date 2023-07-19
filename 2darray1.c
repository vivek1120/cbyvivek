//Transpose of a 3x3 Matrix in C
#include<stdio.h>
int main()
{
    int a[3][3];
    printf("enter a value of 3*3 matrix: ");
   for (int row = 0;row < 3; row++)
   {
     for (int colum = 0;colum < 3; colum++)
     {
         scanf("%d",&a[row][colum]);
         
     }
        
    }
     printf("The matrix is:\n");
     for (int row = 0; row < 3; row++)
     {
        for (int colum= 0; colum< 3;colum++)
        {         
            printf("%d\t",a[colum][row]);  
        } 
       printf("\n"); 
     } 
     return 0; 
}