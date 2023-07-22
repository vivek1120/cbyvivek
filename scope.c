//this program is tell about varaible life cycle or life span of variable
#include<stdio.h>
#include<unistd.h>

int addititon();
int h =15;//global variable




int main()
{  
    static int a = 8;
    printf("value of h:%d\n",h);
    printf("address of if h:%p\n",&h);
    printf("PID : %d\n",getpid());
    printf("[function v ] value of v: %d\n",addititon());
    printf("[main] value of a:%d\n",a);
    if (1)
    {
        int a = 9;
        printf("value of if a:%d\n",a);

        printf("address of if a:%p\n",&a);


    }

    printf("value of after if main a:%d\n",a);
    printf("address of main  a:%p\n",&a);
    
    return 0;
}



int addititon()
{
    int v;
    v = 7;
    v = v +3;
    //printf("[inside function] value of a:%d\n",a);
    int a = 6;
    return v;
}
