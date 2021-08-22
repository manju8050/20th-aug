#include<stdio.h>
void swap(void *a,void *b)
{
    int temp = *(int*)a;
    *(int*)a = *(int*)b;
    *(int*)b = temp;
}

int main()
{ 
    int a=10;
    int b=20;
    printf("before swapping %d %d\n",a,b);

    swap(&a,&b);

    printf("after swapping %d %d\n",a,b);


}

//
before swapping 10 20
after swapping 20 10

