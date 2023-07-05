/*this program doing the dynamic arithmetic operation such as,
addition and subraction in integer and float datatypes.
1. you can enter a input like this 
2. sample input:
        10 4
        3.4 4.4 */
#include <stdio.h>
int main()
{
    int a,b;
    float c,d;
    
    printf(" ");
    scanf("%d%d",&a,&b);
    scanf("%f%f",&c,&d);
    
    printf("%d %d\n%.1f %.1f\n",a+b,a-b,c+d,c-d);
    
   return 0;

}