#include <stdio.h>

int i = 0;
int j = 1;
int k;

void fib(n)
{
    if(n == 0)
    {
        return;
    }
    k = i + j;
    i = j;
    j = k;
    if(k%2 == 0)
    {
        printf("%d ", k);
        fib(n-1);
    }
    else
    {
        fib(n);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    fib(n);
    return 0;
}
