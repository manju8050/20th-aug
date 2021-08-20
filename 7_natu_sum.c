
#include <stdio.h>
int natu(int a,int num)
{
    if(a==num)
        return a;
    else
        return a+natu(a+1,num);
}
int main()
{
   int num,sum,a=1;
   printf("enter the n value\n");
   scanf("%d",&num);

   sum = natu(a,num);
   
   printf("%d",sum);
   return 0;
}

//
enter the n value
10
55
