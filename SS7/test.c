#include <stdio.h>
int main()
{
    int num = 3000;
    int n = ceil(log10(num));
    printf("%d", n);
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        temp = temp * 10 + num % 10;
        num = num / 10;
    }
    printf("%d\n", temp);
}