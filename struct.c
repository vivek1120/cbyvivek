#include<stdio.h>
struct mixed
    {
        float x;
        int y;
        char v;
        
    };
int main()
{
   struct mixed fl,in,ch;
    fl.x = 29.4;
    in.y = 876;
    ch.v = 't';
    printf("i am form float: %.2f\n",fl.x);
    printf("i am form integer: %d\n",in.y);
    printf("i am form charactar: %c\n",ch.v);


    
    
}