#include <bits/stdc++.h>
/*
Khai báo mảng số nguyên 2 chiều gồm n*m phần tử (n,m nhập từ bàn phím). In menu và thực hiện các chức năng theo menu sau :
*/
int nt(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return n > 1;
}
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m];
    int choice;
    int check = 0;
    while (1)
    {
        printf("-------MENU\n");
        printf("1. Nhập giá trị các phần tử của mảng\n");
        printf("2. In giá trị các phần tử của mảng theo ma trận\n");
        printf("3. In ra các phần tử ở góc theo ma trận\n");
        printf("4. In ra các phần tử nằm trên đường biên theo ma trận\n");
        printf("5. In ra các phần tử nằm trên đường chéo chính và chéo phụ theo ma trận\n");
        printf("6. In ra các phần tử là số nguyên tố theo ma trận\n");
        printf("7. Thoát chương trình\n");

        printf("Nhập lựa chọn của bạn\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            // 1. Nhập giá trị các phần tử của mảng
            {
                for (int i = 0; i < n; i++)
                {
                    for (int j = 0; j < m; j++)
                    {
                        scanf("%d", &arr[i][j]);
                    }
                }
                check = 1;
                break;
            }
        case 2:
            // 2. In giá trị các phần tử của mảng theo ma trận
            {
                if (check == 0)
                {
                    printf("Bạn chưa nhập giá trị các phần tử của mảng\n");
                    break;
                }
                for (int i = 0; i < n; i++)
                {
                    for (int j = 0; j < m; j++)
                    {
                        printf("%d ", arr[i][j]);
                    }
                    printf("\n");
                }
                break;
            }
        case 3:
            // 3. In ra các phần tử ở góc theo ma trận
            {
                if (check == 0)
                {
                    printf("Bạn chưa nhập giá trị các phần tử của mảng\n");
                    break;
                }
                printf("Góc trên bên trái: %d\n", arr[0][0]);
                printf("Góc trên bên phải: %d\n", arr[0][m - 1]);
                printf("Góc dưới bên trái: %d\n", arr[n - 1][0]);
                printf("Góc dưới bên phải: %d\n", arr[n - 1][m - 1]);
                break;
            }
        case 4:
            // 4. In ra các phần tử nằm trên đường biên theo ma trận
            {
                if (check == 0)
                {
                    printf("Bạn chưa nhập giá trị các phần tử của mảng\n");
                    break;
                }
                for (int i = 0; i < n; i++)
                {
                    for (int j = 0; j < m; j++)
                    {
                        if (i == 0 || i == n - 1 || j == 0 || j == m - 1)
                        {
                            printf("%d ", arr[i][j]);
                        }
                        else
                        {
                            printf("  ");
                        }
                    }
                    printf("\n");
                }
                break;
            }
        case 5:
            // 5. In ra các phần tử nằm trên đường chéo chính và chéo phụ theo ma trận
            {
                if (check == 0)
                {
                    printf("Bạn chưa nhập giá trị các phần tử của mảng\n");
                    break;
                }
                for (int i = 0; i < n; i++)
                {
                    for (int j = 0; j < m; j++)
                    {
                        if (i == j || i + j == n - 1)
                        {
                            printf("%d ", arr[i][j]);
                        }
                        else
                        {
                            printf("  ");
                        }
                    }
                    printf("\n");
                }
                break;
            }
        case 6:
            // 6. In ra các phần tử là số nguyên tố theo ma trận
            {
                if (check == 0)
                {
                    printf("Bạn chưa nhập giá trị các phần tử của mảng\n");
                    break;
                }
                for (int i = 0; i < n; i++)
                {
                    for (int j = 0; j < m; j++)
                    {
                        if (nt(arr[i][j]))
                        {
                            printf("%d ", arr[i][j]);
                        }
                        else
                        {
                            printf("  ");
                        }
                    }
                    printf("\n");
                }
                break;
            }
        case 7:
        {
            break;
        }
        }
        if (choice == 7)
        {
            printf("Thoát chương trình\n");
            break;
        }
    }
}