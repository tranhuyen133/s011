#include <stdio.h>
void division(int a, int b)
{
    if (a % b == 0)
    {
        int c = a / b;
        printf("%d / %d = %d\n", a, b, c);
    }
    else
        printf("%d ko chia het cho %d\n", a, b);
}
void multiply(int a, int b)
{
    int c = a * b;
    printf("%d * %d = %d\n", a, b, c);
}
int main()
{
    int a, b, c;
    printf("Nhap 3 so a,b,c\n");
    scanf("%d%d%d", &a, &b, &c);
    multiply(a, b);
    if (a > b)
        division(a, b);
    else
        division(b, a);

    multiply(c, b);
    if (c > b)
        division(c, b);
    else
        division(b, c);

    multiply(a, c);
    if (a > c)
        division(a, c);
    else
        division(c, a);
}