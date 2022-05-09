#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define len 20

int rand0(int uppon);
int main(void)
{
    int arr[len];
    srand(time(0));

    for (size_t i = 0; i < len; i++)
    {
        arr[i] = rand0(20);
        printf("%d ",arr[i]);
    }
}

int rand0(int uppon)
{
    return rand() %10 + 10;
}

