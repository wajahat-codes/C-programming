#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x;
    printf("Enter a Number:");
    scanf("%d", &x);
    if (x > 0 && x % 2 == 0)
    {
        printf("Positive and Even");
    }
    else if (x > 0 && x % 2 != 0)
    {
        printf("positive and Odd");
    }
    else if (x < 0)
    {
        printf("Negative");
    }
    else
        printf("Zero");
    return 0;
}