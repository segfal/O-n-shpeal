#include <stdio.h>

//O(1)
void constant_time(int n)
{
    n = n + 1;
}


//O(n)
void linear_time(int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        continue;
    }
}

//O(n^2)
void quadratic_time(int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        int j;
        for (j = 0; j < n; j++)
        {
            continue;
        }
    }
}

//O(log n)
void logarithmic_time(int n)
{
    int i;
    for (i = 1; i < n; i*=2)
    {
        continue;
    }
}

void code()
{
    int n = 10;
    constant_time(n);
    linear_time(n);
    quadratic_time(n);
    logarithmic_time(n);
}


int main(
{
    code();
    return 0;
}
