#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a Number:");
    scanf("%d", &n);
    if (n % 3 == 0 && n % 2 == 0)
    {
        printf("Divisible By 3 and 2");
    }
    else
        printf("Not Divisible by 3 and 2");

    return 0;
}