#include<stdio.h>
int main(){
    int a ,b;
    char choice;

    printf("your choice is\n a for addition\n s for subraction\n m for multiplication\n r for remainder of division\n q for quotient of division\n");

    printf("enter a choice: ");
    scanf("\n%c",&choice);

    printf("enter a two values for arithmetic operation: ");
    scanf("%d %d",&a,&b);

    switch (choice)
    {
    case 'a':
        printf("%d",a+b);
        break;
    case 's':
        printf("%d",a-b);
        break;
    case 'm':
        printf("%d",a*b);
        break;
    case 'r':
        printf("%d",a%b);
        break;
    case 'q':
        printf("%.2f", (float)a/b);
        break;
    
    default:
        printf("Error: invalid choice");
        break;
    }

}

