#include <stdio.h>

typedef struct complex
{
    double real;
    double Imaginary;
} complex;

void prt(double x,double y);

int main(void)
{   
    complex x1 = {1,2.3};
    complex x2 = {.Imaginary = 4.0};
    complex x3 = {13};
    complex x4 = {0};

    prt(x1.real,x1.Imaginary);
    prt(x2.real,x2.Imaginary);
    prt(x3.real,x3.Imaginary);
    prt(x4.real,x4.Imaginary);

    return 0;
}
void prt(double x,double y)
{
    if(x != 0.0 && y == 0.0)
        printf("%lf\n",x);
    else if (x == 0.0 && y != 0.0)
        printf("%lfi\n",y);
    else if( x == 0.0 && y == 0.0)
        printf("%lf\n",0.0);
    else
        printf("%lf + %lfi\n",x,y);
}
