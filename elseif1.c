#include<stdio.h>

int main()
{
    int choice, a, b;
    
    printf("Your choice is made of 1 to 4\n1 is addition\n2 is subtraction\n3 is multiplication\n4 is division\n");
    
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice>=1 && choice<=4)
    {
      printf("Enter the two numbers: ");
      scanf("%d %d", &a, &b);
    
    
    
    if (choice == 1)
    {
        printf("Result: %d\n", a + b);
    }
    else if (choice == 2)
    {
        printf("Result: %d\n", a - b);
    }
    else if (choice == 3)
    {
        printf("Result: %d\n", a * b);
    }
    else if (choice == 4)
    {
        if (b != 0)
        {
            printf("Result: %.2f\n", a /(float) b);
        }
        else
        {
            printf("Error: Division by zero!\n");
        }
    }
  
    }
    else
    {
        printf("Invalid choice! choose the opption between 1 to 4\n");
    }
    
       

    return 0;
}
