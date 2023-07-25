//this program is tell about varaible life cycle or life span of variable
#include<stdio.h>
#include<unistd.h>

int addititon();
int h =15;//global variable

int main()
{  
    for (int i = 0; i < 5; i++)
    {
        printf("for loop :%d\n",addititon());
    }
    static int x = 8;
    printf("value of h global variable:%d\n",h);
    printf("value of x static variable:%d\n",x);

    printf("address of if global variable:%p\n",&h);
    printf("address of static variable   :%p\n",&x);

    printf("PID : %d\n",getpid());
    printf("function value of v: %d\n",addititon());


    if (1)
    {
        int a = 9;
        printf("if value  a:%d\n",a);
        printf("if address a:%p\n",&a);

        
        printf("value of static inside function :%d\n",x);
    }
    
    return 0;
}



int addititon()
{
     int v =1;
    v = v +3;
    v++;
    printf("value of v :%d\n",v);
    printf("address of v:%p\n",&v);
    int a = 6;
    printf("value of function a :%d\n",a);
    printf("address of function a:%p\n",&a);



    return v;
}
