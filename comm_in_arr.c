#include <stdio.h>
int main()
{
    int arr1[]={1,2,3};
    int arr2[]={3,2,1};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if((arr1[i]^arr2[j])==0)
            {
                printf("%d\n",arr1[i]);
            }
        
        }
    }
   
}


//
1
2
3

