#include<stdio.h>
int main()
{
int a, b;
printf("");
scanf("%d %d",&a,&b);

printf("bitwise &:%d\n", a & b);
printf("bitwise or:%d\n", a | b);
printf("bitwise xor:%d\n", a ^ b);

return 0; 
}