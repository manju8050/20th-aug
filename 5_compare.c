
#include <stdio.h>
int main()
{
   FILE * fp1=fopen("hello.txt","r");
   FILE * fp2=fopen("hai.txt","a");
    char ch1,ch2;
   if(fp1==NULL||fp2==NULL)
   {
       printf("file not exist\n");
       return 0;
   }
   else
   {
       while((ch1=fgetc(fp1)!=EOF)&&(ch2=fgetc(fp2)!=EOF))
       {
           
           if(ch1!=ch2)
           {
               printf("file are different\n");
               exit(0);
           }
       }
       printf("file are same\n");
       
   }
   fclose(fp1);
   fclose(fp2);
   
   
   return 0;
}
