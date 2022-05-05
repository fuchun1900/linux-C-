#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void diamond(int a, char c);

int main(void)
{
    int x;
    char c;

    printf("please enter the number ande shape :");
    scanf("%d %c,",&x,&c);
    diamond(x,c);
}

void diamond(int a, char c)
{
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= abs(a/2 - i + 1) ; j++)
            printf("\t");
        for (int j = 1 ; j <=  a - 2*abs(a/2 - i + 1) ; j++)
        {
            printf("%c",c);
            printf("\t");
        }
        printf("\n");
    }
}