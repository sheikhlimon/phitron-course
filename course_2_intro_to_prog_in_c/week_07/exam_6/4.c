#include <stdio.h>
#include <string.h>

struct Fraction
{
    int numerator;
    int denominator;
};

struct Fraction input()
{
    struct Fraction f;
    scanf("%d %d", &f.numerator, &f.denominator);
    return f;
}

void print(struct Fraction f)
{
        printf("%d/%d", f.denominator, f.numerator);
}

struct Fraction add(struct Fraction a, struct Fraction b)
{
    struct Fraction res;
    res.numerator = a.numerator*b.denominator + b.numerator*a.denominator;
    res.denominator = a.denominator*b.denominator;
    return res; 
};

int main()
{
    struct Fraction a, b;
    a = input();
    b = input();

    print(a);
    printf(" + ");
    print(b);
    printf(" = ");
    print(add(b, a));
    printf("\n");
    
    return 0;
}