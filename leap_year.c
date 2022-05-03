#include <stdio.h>
#include <stdbool.h>
bool is_leap_year(int x);

int main(void)
{
    int year;
    printf("Please enter the year :");
    scanf("%d",&year);
    if (is_leap_year(year))
        printf("%d is leap year .",year);
    else
        printf("%d is not leap year .",year);
}

bool is_leap_year(int x)
{
    if((x % 4 == 0 && x % 100 != 0) || x % 400 ==0 )
        return true;
    return false;
}