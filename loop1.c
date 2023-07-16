#include<stdio.h>
int main()
{
    int inp;
    int dig;
    printf("Enter a number: ");
    scanf("%d",&inp);
    while(inp>0)
    {
        dig=inp%10;
        printf("lsd: %d\n",dig);
        inp=inp/10;
        
    }
    

    
}
