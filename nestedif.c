#include<stdio.h>
int main()
{
    int t = 6;
    int l = 7;
    int r = 27;
    int p = 2;
    int c,a;
    printf("which time for come to kho kho ground: ");
    scanf("%d",&t,&l);

    if (t == 6)
    {
        printf("how much length of the kho kho ground: ");
        scanf("%d",&r);
        if (r==27)
        {
            printf("how many post are there in kho kho ground: ");
            scanf("%d",&p);
            if (p==2)
            {
                printf("how many chaser in kho kho game: ");
                scanf("%d",&c);
                if (c == 8)
                {
                    printf("your a kho kho player");
                }
                
            }else
    {
        printf("you need to know about kho kho game or contact 9384358152");
    }
            
        }else
    {
        printf("you need to know about kho kho game or contact 9384358152");
    }
        
    }
    else
    {
        printf("your not a normal person you have some weird personality pls consult doctor");
    }
    return 0;
}