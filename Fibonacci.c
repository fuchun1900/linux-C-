#include <stdio.h>

int fibonacci(int x);

int main(void)
{
    int item;

    printf("please enter the item : ");
    scanf("%d",&item);
    printf("The %d item fibonacci number is %d .",item,fibonacci(item));

    return 0;
}

int fibonacci(int x)
{
    if(x == 0 || x == 1)
        return 1;

    return fibonacci(x - 1) + fibonacci(x - 2);
}