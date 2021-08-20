#include<stdio.h>
int rev=0,rem;
int fun(int num)
{
    
    if(num)
    {
        rem=num%10;
        rev=rev*10+rem;
        return fun(num/10);

    }
    else
    return rev;
    
    


}
int main()
{
    int num=1234;

    int res=fun(num);
    printf("%d",res);
    
}

//
4321
