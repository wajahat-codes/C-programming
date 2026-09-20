#include<stdio.h>
int main(int argc, char const *argv[])
{
     float a,b,c,average;
     printf("Enter three numbers:");
     scanf("%f %f %f", &a ,&b, &c);
      average = (a+b+c)/3;
     printf("The average of the numbers is %f",average);



    return 0;
}