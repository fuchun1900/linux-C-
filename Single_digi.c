#include <stdio.h>
void prt(int x);

int main(void)
{
    int x;

    printf("Please enter a number: ");
    scanf("%d",&x);
    prt(x);
    
    return 0;
}

void prt(int x)
{
    printf("%d is %d and %d ",x,(x%100-x%10)/10,x%10);
}