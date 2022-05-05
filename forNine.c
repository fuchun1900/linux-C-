#include <stdio.h>

int searchForNine(int number);
int main(void)
{
    int input;
    printf("Please enter the number :");
    scanf("%d",&input);
    printf("The %d has %d '9' .",input,searchForNine(input));

}

int searchForNine(int number)
{
    int result = 0;

    while (number > 0)
    {
        int s = number % 10;
        int t = number / 10;

        if (s == 9 || t == 9)
            result ++;
        number--;
    }
    return result;

}