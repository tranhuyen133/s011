#include <stdio.h>
#include <stdbool.h>
#include <math.h>
bool isPrime(int a)
{
    if (a < 2)
    {
        return false;
    }
    else
    {
        for (int i = 2; i < sqrt(a); i++)
        {
            if (a % i == 0)
            {
                return false;
            }
        }
        return true;
    }
}
int main()
{
    int a, b, count1 = 0, count2 = 0;
    printf("nhap so phan tu cua mang 1");
    scanf("%d", &a);
    int arr1[a];
    for (int i = 0; i < a; i++)
    {
        printf("arr1[%d]=", i);
        scanf("%d", &arr1[i]);
    }
    printf("nhap so phan tu cua mang 2");
    scanf("%d", &b);
    int arr2[b];
    for (int i = 0; i < b; i++)
    {
        printf("arr2[%d]=", i);
        scanf("%d", &arr2[i]);
    }

    // dem count
    printf("Cac phan tu la so nguyen to cua mang 1 la");
    for (int i = 0; i < a; i++)
    {
        if (isPrime(arr1[i]))
        {
            count1++;
            printf("arr1[%d]=%d\n", i, arr1[i]);
        }
    }
    printf("Cac phan tu la so nguyen to cua mang 2 la");

    for (int i = 0; i < b; i++)
    {
        if (isPrime(arr2[i]))
        {
            count2++;
            printf("arr2[%d]=%d\n", i, arr2[i]);
        }
    }
    // so sanh
    printf("mang co nhieu so nguyen to hon la\n");
    if (count1 > count2)
    {
        for (int i = 0; i < a; i++)
        {
            printf("arr1[%d]=%d\n", i, arr1[i]);
        }
    }
    else
    {
        for (int i = 0; i < a; i++)
        {
            printf("arr2[%d]=%d\n", i, arr2[i]);
        }
    }
}