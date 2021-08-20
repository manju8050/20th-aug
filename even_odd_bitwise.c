//write C program to check if a number is even or odd and if even : divide it by 2 and if it is odd : double it 
//: only bitwise operators to be used : only positive numbers

#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number to check the given number is even or odd\n");
    scanf("%d",&num);

    if(num&1)
    {
        printf("odd number\n");
        printf("double value is: %d\n",num<<1);
    }
    else
    {
        printf("even number\n");
        printf("half value is: %d\n",num>>1);
    }
}

//
Enter the number to check the given number is even or odd
5
odd number
double value is: 10

//
Enter the number to check the given number is even or odd
4
even number
half value is: 2