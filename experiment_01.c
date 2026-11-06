// write a program to find divisor or factorial of a given number.
#include <stdio.h>
void divisor(int n)
{
    printf("the divisor of %d is \n", n);
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d, ", i);
        }
    }
}
int factorial(int a)
{
    if (a == 1 || a == 0)
    {
        return 1;
    }
    return a * factorial(a - 1);
}

int main()
{
    int n, b, a;
    printf(" enter 1 for factorial \n enter 0 for divisor \n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("enter a number to get factorial of \n");
        scanf("%d", &a);
        b = factorial(a);
        printf(" the factorial of %d is \n %d ", a, b);

        break;

    case 0:
    {
        int a;
        printf("enter a number to get divisors of \n");
        scanf("%d", &a);
        divisor(a);
        break;
    }
    default:
    {
        printf(" please enter 1 for factorial or 0 for divisior only");
    }
    }
    return 0;
}