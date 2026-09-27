
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x, tensdigit, unitdigit;
    printf("Enter a Two digit Number:");
    scanf("%d", &x);

    tensdigit = x % 10;
    printf("Tens digit =%d\n", tensdigit);

    unitdigit = x / 10;
    printf("Unit Digit = %d\n", unitdigit);

    return 0;
}