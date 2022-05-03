#include <stdio.h>
#include <math.h>

double myround(double x);
int main(void)
{
    double input;

    printf("please enter the number :");
    scanf("%lf",&input);
    printf("%.2lf = %.2lf \n",input,myround(input));

    return 0;
}

double myround(double x)
{
   double temp = (x >= 0)?  ceil(x) : floor(x);

    return temp;

}