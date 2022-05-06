#include <stdio.h>

struct rational
{
    int son;
    int mother;
};
struct rational add_rational(struct rational,struct rational );
struct rational sub_rational(struct rational ,struct rational );
struct rational mul_rational(struct rational ,struct rational );
struct rational div_rational(struct rational ,struct rational );
struct rational make_rational(int a, int b );
void print_rational(struct rational);
int Euclid(int a,int b);


int main(void)
{
    struct rational a = make_rational(5,12);
    struct rational b = make_rational(3,10);
    print_rational(add_rational(a,b));
    print_rational(sub_rational(a,b));
    print_rational(mul_rational(a,b));
    print_rational(div_rational(a,b));
}

int Euclid(int a,int b)
{
    if(a % b == 0.0)
        return b;
    return Euclid(b,a % b);
}

struct rational make_rational(int a, int b)
{
    struct rational temp;
    int gcd;

    gcd = Euclid(a,b);
    temp.son = a/gcd;
    temp.mother = b/gcd;

    return temp;
}

void print_rational(struct rational z)
{
    if (z.son == 0)
        printf("%d",0);
    printf("%d/%d\n",z.son,z.mother);
}

struct rational add_rational(struct rational x ,struct rational y)
{
    struct rational temp;
    int gcd = Euclid(x.mother,y.mother);
    int a1 = x.mother/gcd;
    int a2 = y.mother/gcd;
    temp.mother = a1 * a2;
    temp.son = x.son * a2 + y.son * a1;

    return temp;
}

 struct rational sub_rational(struct rational x ,struct rational y)
 {
    struct rational temp;
    int gcd = Euclid(x.mother,y.mother);
    int a1 = x.mother/gcd;
    int a2 = y.mother/gcd;
    temp.mother = a1 * a2;
    temp.son = x.son * a2 - y.son * a1;

    return temp;
 }

 struct rational mul_rational(struct rational x ,struct rational y)
 {
    struct rational temp;

    temp.mother = x.mother * y.mother;
    temp.son = x.son * y.son;
    int gcd = Euclid(temp.son,temp.mother);
    temp.mother /= gcd;
    temp.son /= gcd;

    return temp;
 }

 struct rational div_rational(struct rational x ,struct rational y)
 {
    struct rational temp = {y.mother,y.son};
    temp = mul_rational(x,temp);

    return temp;
 }
 