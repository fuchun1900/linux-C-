#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LEN 40
#define STANDAR 10

int rand0(int uppon);
int histogram(int n);
int main(void)
{
    int arr[LEN];
    int count[STANDAR] = {0};
    int total = 0;

    srand(time(NULL));
    for (size_t i = 0; i < LEN; i++)
        arr[i] = rand0(STANDAR);
    for (size_t i = 0; i < LEN; i++)
        count[arr[i]]++;
    for (int i = 0; i < STANDAR; i++)
        printf("%d  ",i);
    printf("\n");
    for (int i = 0; i < STANDAR; i++)
    {
        printf("%d  ",count[i]);
        total += count[i];
    }
    printf("\n");
    while (total > 0)
    {
        for (size_t i = 0; i < STANDAR; i++)
        {
            if (count[i] != 0)
            {
                printf("%c  ",'*');
                count[i]--;
                total --;
            }
            else
                printf("   ");

        }
        printf("\n");
    }
    

    

    return 0;
}

int rand0(int uppon)
{
    return rand() % uppon;
}

