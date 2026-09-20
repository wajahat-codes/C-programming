
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c,sum;
    printf("Enter Three numbers:");
    scanf("%d %d %d",&a,&b,&c);
     sum = a+b+c;
     printf("The sum of the numbers is %d:",sum);
     //or
     //printf("The sum of the numbers %d %d and %d is %d:",a,b,c,sum);
    return 0;
}