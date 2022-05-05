#include <stdio.h>
int fibonacci(int);
int main(void)
{
    int input;

    printf("Please enter the item : ");
    scanf("%d",&input);
    printf("The %d item fibonacci number is %d.",input,fibonacci(input));

}

int fibonacci(int x)
{
    int a = 1;
    int b = 1;
    int temp;

    if (x == 2 || x == 1)
        return 1;
    while (x > 2)
    {
        temp = b;
        b = a + b;
        a = temp;
        x -= 1;
    }
    return b;  
} 