//dynamic multiplication table
#include<stdio.h>

int multi_table(int v)
{   
   int a = 0;
   while (1)
   {    
    for (int i = 0; i <= 20; i++)
    {
        printf("%d  x  %d = %d\n",i,v,i*v);
    }
     a++;
     break;
   }
}
int main()
{   int m;
    ("enter the mutltiplication table you want: ");
    scanf("%d",&m);
    multi_table(m);
}
   
    
