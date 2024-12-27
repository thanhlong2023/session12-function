#include <bits/stdc++.h>
int gt(int n)
{
    if (n == 0)
        return 1;
    return n * gt(n - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", gt(n));
}