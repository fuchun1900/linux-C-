#include <stdio.h>

int Euclid(int a,int b);

int main(void)
{
    int a,b;
    printf("please enter two integer :");
    scanf("%d %d",&a,&b);
    printf("%d and %d GCD is %d",a,b,Euclid(a,b));

    return 0;
}

int Euclid(int a,int b)
{
    if(a % b == 0)
        return b;
    return Euclid(b,a % b);
}