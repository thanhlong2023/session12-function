#include <bits/stdc++.h>
/*
Xây dựng hàm tạo ma trận 2 chiều có 2 tham số là số hàng và số cột, khi gọi hàm người dùng sẽ phải nhập vào từng giá trị trong ma trận. Hàm có kết quả trả về là một mảng 2 chiều với số hàng và số cột giống với giá trị truyền vào. Viết chương trình yêu cầu người dùng nhập vào số hàng và số cột và sử dụng hàm để tạo ma trận, in ma trận ra màn hình để kiểm tra kết quả.
*/
void mang(int a, int b)
{
    int arr[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    mang(a, b);
    return 0;
}