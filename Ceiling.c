#include <stdio.h>
int main(void)
{
    int a,b;
    printf("please enter a integer: ");
    scanf("%d %d",&a,&b);
    printf("a / b = %d",(a %b == 0)? a/b:a/b+1);

    return 0;

}