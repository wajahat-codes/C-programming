#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x;
    printf("Enter a Number:");
    scanf("%d", &x);
    if (x % 7 == 0 || x % 3 == 0)
    {
        printf("Divisible");
    }
    else
        printf("Not Divisible");
    return 0;
}