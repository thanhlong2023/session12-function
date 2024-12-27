#include <bits/stdc++.h>
int sohoanhao(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum += i;
    }

    return sum == n;
}
int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int n;
        scanf("%d", &n);
        if (sohoanhao(n))
            printf("True\n");
        else
            printf("False\n");
    }
}