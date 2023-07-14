//now we see about debugging in c. the simple helloworld loop program going to debugg.
//debugger tool name called gdb - generic c debugger

#include<stdio.h>
int main()
{
    int i=1;
    for(i=1;i<=10;i++)
    {
        printf("%dhello world\n", i);
    }
    return 0;
}