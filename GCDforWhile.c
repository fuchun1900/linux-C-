#include <stdio.h>
int Euclid(int a, int b);

int main(void)
{
    int a,b;

    printf("Please enter the integer : ");
    scanf("%d %d",&a,&b);
    printf("%d / %d = %d ",a,b,Euclid(a,b));
}

int Euclid(int a,int b)
{
    while (a % b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return b;
}