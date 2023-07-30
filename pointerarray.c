#include<stdio.h>
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr ;  // 'ptr' points to the first element of 'arr'
    ptr = arr;
    for (int i = 0; i < 1; i++)
    {
        printf("pointer point to the first element of the array:%x\n",*ptr);
        printf("pointer element                                 %d:\n",&ptr);
        printf("pointer element                                 %d:\n",ptr);
       
    }
        printf("arrays element %d:\n",arr);
        printf("arrays element %d:\n",&arr[1]);
        printf("arrays element %d:\n",&arr); 

}