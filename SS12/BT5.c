#include <stdio.h>
#include <stdlib.h>
int main()
{
    int row, col, choice, a, b;
    printf("Nhap dong va cot tu ban phim");
    scanf("%d%d", &row, &col);
    int arr[row][col];
    do
    {
        printf("----------------------------MENU-------------------------------\n");
        printf("1. Nhập giá trị các phần tử của mảng\n");
        printf("2. In giá trị các phần tử của mảng theo ma trận\n");
        printf("3. In ra các phần tử ở góc theo ma trận\n");
        printf("4. In ra các phần tử nằm trên đường biên theo ma trận\n");
        printf("5. In ra các phần tử nằm trên đường chéo chính và chéo phụ theo ma trận\n");
        printf("5. In ra các phần tử nằm trên đường chéo chính và chéo phụ theo ma trận\n");
        printf("7. Thoát\n");
        choice = 0;
        printf("nhap lua chon cua ban\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Nhap dong va cot tu ban phim cac gia tri can nhap");
            scanf("%d%d", &a, &b);
            if (a > row || b > col)
            {
                printf("so phan tu can nhap ko phu hop\n");
                break;
            }
            for (int i = 0; i < a; i++)
            {
                for (int j = 0; j < b; j++)
                {
                    printf("arr[%d][%d]= ", i, j);
                    scanf("%d", &arr[i][j]);
                }
            }
            break;
        case 2:
            for (int i = 0; i < a; i++)
            {
                for (int j = 0; j < b; j++)
                {
                    printf("%d\t ", arr[i][j]);
                }
                printf("\n");
            }
            break;
        case 3:
            for (int i = 0; i < a; i++)
            {
                for (int j = 0; j < b; j++)
                {
                    if ((i == 0 && ((j == 0) || (j == 2))) || i == 2 && ((j == 0) || (j == 2)))
                    {
                        printf("%d ", arr[i][j]);
                    }
                    printf("\t");
                }
                printf("\n");
            }
            break;
        case 4:
            for (int i = 0; i < a; i++)
            {
                for (int j = 0; j < b; j++)
                {
                    if (i == 0 || j == 0 || i == a - 1 || j == b - 1)
                    {
                        printf("%d", arr[i][j]);
                    }
                    printf("\t");
                }
                printf("\n");
            }
            break;
        case 5:
            printf("Duong cheo phu\n");
            for (int i = a; i > 0; i--)
            {
                printf("%d",arr[i][a-i]);
            }
            printf("Duong");
            break;
        case 6:
            break;
        default:
            printf("nhap lua chon cua ban");
            break;
        }
    } while (1 == 1);
}