#include<stdio.h>

long long int floorSqrt(long long int x)
{
    long long int l = 0, r = x - 1;
    if (x == 1 || x == 2 || x == 3)
        return 1;
    while (l < r)
    {
        long long int m = l + (r - l) / 2;
        if ((m * m) > x)
            r = m;
        else
            l = m + 1;
    }
    return l - 1;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long n;
        scanf("%ld", &n);

        printf("%ld\n", floorSqrt(n));
    }
    return 0;
}