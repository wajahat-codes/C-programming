#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x;
    printf("Enter a number:");
    scanf("%d", &x);
    x > 0 ? printf("Positive") : printf("Negative");
    return 0;
}
