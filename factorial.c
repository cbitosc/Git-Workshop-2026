#include <stdio.h>
/*
 * Calculates the factorial of a non-negative integer
 * using an iterative approach.
 */
unsigned long long factorial(int n)
{
    unsigned long long result = 1;
    /* Multiply result by each number from 2 to n */
    for (int i = 2; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

int main()
{
    int number;
    printf("Enter a non-negative integer: ");
    if (scanf("%d", &number) != 1)
    {
        printf("Error: Invalid input.\n");
        return 1;
    }
    if (number < 0)
    {
        printf("Error: Factorial is not defined for negative numbers.\n");
        return 1;
    }
    printf("%d! = %llu\n", number, factorial(number));
    return 0;
}