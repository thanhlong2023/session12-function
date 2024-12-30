#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void sortTang(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void sortGiam(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

bool binarySearch(int arr[], int size, int value)
{
    int left = 0, right = size - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == value)
            return true;
        if (arr[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return false;
}

int main()
{
    int arr[100];
    int choice;
    int size = 0;
    while (1)
    {
        printf("-------MENU\n");
        printf("1. Nhập số phần tử cần nhập và giá trị các phần tử\n");
        printf("2. In ra giá trị các phần tử đang quản lý\n");
        printf("3. Thêm một phần từ vào vị trí chỉ định\n");
        printf("4. Sửa một phần từ ở vị trí chỉ định\n");
        printf("5. Xóa một phần từ ở vị trí chỉ định\n");
        printf("6. Sắp xếp các phần tử ( Khi lựa chọn menu cha thì hiển thị menu con )\n");
        printf("7. Tìm kiếm phần tử nhập vào\n");
        printf("8. Thoát\n");
        printf("Nhập lựa chọn của bạn\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            int n;
            printf("Nhập số phần tử cần nhập\n");
            scanf("%d", &n);
            for (int i = 0; i < n; i++)
            {
                printf("Nhập phần tử thứ %d\n", i);
                scanf("%d", &arr[i]);
            }
            size = n;
            break;
        }
        case 2:
        {
            // 2. In ra giá trị các phần tử đang quản lý
            if (size == 0)
            {
                printf("Bạn chưa nhập giá trị các phần tử của mảng\n");
                break;
            }
            else
            {
                printArray(arr, size);
            }
            break;
        }
        case 3:
        {
            // 3. Thêm một phần từ vào vị trí chỉ định
            if (size == 0)
            {
                printf("Bạn chưa nhập giá trị các phần tử của mảng\n");
                break;
            }
            else
            {
                int pos, value;
                printf("Nhập vị trí cần thêm\n");
                scanf("%d", &pos);
                printf("Nhập giá trị cần thêm\n");
                scanf("%d", &value);
                if (pos < 1 || pos > size + 1)
                {
                    printf("Vị trí không hợp lệ\n");
                    break;
                }
                for (int i = size; i > pos - 1; i--)
                {
                    arr[i] = arr[i - 1];
                }
                arr[pos - 1] = value;
                size++;
                printf("Thêm thành công\n");
                break;
            }
        }

        case 4:
        {
            // 4. Sửa một phần từ ở vị trí chỉ định
            if (size == 0)
            {
                printf("Bạn chưa nhập giá trị các phần tử của mảng\n");
                break;
            }
            else
            {
                int pos, value;
                printf("Nhập vị trí cần sửa\n");
                scanf("%d", &pos);
                printf("Nhập giá trị cần sửa\n");
                scanf("%d", &value);
                if (pos < 1 || pos > size)
                {
                    printf("Vị trí không hợp lệ\n");
                    break;
                }
                arr[pos - 1] = value;
                printf("Sửa thành công\n");
                break;
            }
        }
        case 5:
        {
            // 5. Xóa một phần từ ở vị trí chỉ định
            if (size == 0)
            {
                printf("Bạn chưa nhập giá trị các phần tử của mảng\n");
                break;
            }
            else
            {
                int pos;
                printf("Nhập vị trí cần xóa\n");
                scanf("%d", &pos);
                if (pos < 1 || pos > size)
                {
                    printf("Vị trí không hợp lệ\n");
                    break;
                }
                pos--;
                for (int i = pos; i < size - 1; i++)
                {
                    arr[i] = arr[i + 1];
                }
                size--;
                printf("Xóa thành công\n");
                break;
            }
        }
        case 6:
        {
            // 6. Sắp xếp các phần tử ( Khi lựa chọn menu cha thì hiển thị menu con )
            if (size == 0)
            {
                printf("Bạn chưa nhập giá trị các phần tử của mảng\n");
                break;
            }
            else
            {
                char sub_choice;
                printf("a. Giảm dần\n");
                printf("b. Tăng dần\n");
                printf("Nhập lựa chọn của bạn\n");
                scanf(" %c", &sub_choice);
                if (sub_choice == 'a')
                {
                    sortGiam(arr, size);
                    printf("Sắp xếp giảm dần thành công\n");
                }
                else if (sub_choice == 'b')
                {
                    sortTang(arr, size);
                    printf("Sắp xếp tăng dần thành công\n");
                }
                else
                {
                    printf("Lựa chọn không hợp lệ\n");
                }
                break;
            }
        }
        case 7:
        {
            // 7. Tìm kiếm phần tử nhập vào
            if (size == 0)
            {
                printf("Bạn chưa nhập giá trị các phần tử của mảng\n");
                break;
            }
            else
            {
                char sub_choice;
                int value;
                printf("a. Tìm kiếm tuyến tính\n");
                printf("b. Tìm kiếm nhị phân\n");
                printf("Nhập lựa chọn của bạn\n");
                scanf(" %c", &sub_choice);
                printf("Nhập giá trị cần tìm\n");
                scanf("%d", &value);
                if (sub_choice == 'a')
                {
                    // Tìm kiếm tuyến tính
                    bool found = false;
                    for (int i = 0; i < size; i++)
                    {
                        if (arr[i] == value)
                        {
                            printf("Tìm thấy giá trị %d tại vị trí %d\n", value, i + 1);
                            found = true;
                            break;
                        }
                    }
                    if (!found)
                    {
                        printf("Không tìm thấy giá trị %d\n", value);
                    }
                }
                else if (sub_choice == 'b')
                {
                    // Tìm kiếm nhị phân
                    sortTang(arr, size); // Đảm bảo mảng đã được sắp xếp
                    if (binarySearch(arr, size, value))
                    {
                        printf("Tìm thấy giá trị %d\n", value);
                    }
                    else
                    {
                        printf("Không tìm thấy giá trị %d\n", value);
                    }
                }
                else
                {
                    printf("Lựa chọn không hợp lệ\n");
                }
                break;
            }
        }
        case 8:
            printf("Thoát chương trình\n");
            break;
        default:
            printf("Lựa chọn không hợp lệ\n");
            break;
        }
        if (choice == 8)
        {
            break;
        }
    }
    return 0;
}