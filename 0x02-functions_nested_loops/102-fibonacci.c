#include <stdio.h>

void fibonacci()
{
    int i, k, num;
    long long int fib[50];
    fib[0] = 1;
    fib[1] = 2;

    printf("%lld, %lld, ", fib[0], fib[1]);
    for (i = 2, k = 3; i < 50; i++, k++)
    {
        fib[k] = fib[i - 1] + fib[i - 2];
        printf("%lld, ", fib[k]);
    }
    printf("\n");
}

int main()
{
    fibonacci();
    return 0;
}
