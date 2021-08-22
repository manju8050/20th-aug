#include<stdio.h>
int main()
{ 
    int a = -20;
    int b = 20;
    float num;
    scanf("%f",&num);
    if(num>255)
    {
        printf("0");
    }

    //int res = (num*((20)-(-20)))/(255+(-20));
    //printf("%d",res);
    else{
        float res=a+((num*40)/255);
        printf("%.4f",res);
    }
    


}

//
0
-20.0000

255
20.0000
PS C:\Users\manju\Desktop> cd "c:\Users\manju\Desktop\" ; if ($?) { gcc Untitled-1.c -o Untitled-1 } ; if ($?) { .\Untitled-1 }        
256
0

