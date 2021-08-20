
#include <stdio.h>
int main()
{
    int c=0,w=0,l=0;
    char ch;
   FILE * file;
   if (file = fopen("hello.txt", "r"))
   {
      printf("File opened successfully in write mode or a new file is created\n");
      
      while((ch = fgetc(file))!=EOF)
      {
          c++;
          if(ch=='\n'||ch=='\0')
          l++;

          if(ch==' '||ch=='\t'||ch=='\n'||ch=='\0')
          w++;

      }
      
      
      printf("done\n");
   }
   else
   printf("Error!");
   fclose(file);

   printf("character = %d\n",c-(w));
    printf("line = %d\n",l+1);
     printf("word = %d\n",w+1);
   return 0;
}

//
File opened successfully in write mode or a new file is created
done
character = 15
line = 2
word = 4
