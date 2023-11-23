#include <stdio.h>
#include <stdbool.h>
bool check(int a[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        if (a[i] != a[n - 1 - i])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int arrayOne =  { 1 , 2 , 3 , 2 , 1 };
    char arrayTwo = {'a', 'n', 'n', 'a', 'a'};
    if (check(arrayOne, sizeof(arrayOne) / sizeof(int)))
    {
        printf("arrayOne là mảng đối xứng ");
    }
    else
        printf("arrayOne không là mảng đối xứng .");
    if (check(arrayTwo, sizeof(arrayTwo) / sizeof(int)))
    {
        printf("arrayTwo là mảng đối xứng ");
    }
    else
        printf("arrayTwo không là mảng đối xứng .");
}