#include <bits/stdc++.h>
/*
Xây dựng hàm tìm ước chung lớn nhất có 2 tham số, kết quả trả về là ước chung lớn nhất của 2 đối số truyền vào. Viết chương trình khai báo và gán giá trị cho 2 số nguyên bất kỳ, sử dụng hàm đã xây dựng để tìm ước chung lớn nhất của chúng.
*/
int ucln(int a, int b)
{
    // neu a hoac b = 0 thi ucln la so con lai
    if (a == 0 || b == 0)
    {
        return a + b;
    }
    while (a != b)
    {
        printf("a = %d, b = %d\n", a, b);
        if (a > b)
        {
            a = a - b; // Thay thế số lớn hơn bằng hiệu 2 số
        }
        else
        {
            b = b - a; // Thay thế số lớn hơn bằng hiệu 2 số
        }
    }
    printf("a = %d, b = %d\n", a, b);
    return a; // b
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("UCLN cua %d va %d la: %d", a, b, ucln(a, b));
    return 0;
}