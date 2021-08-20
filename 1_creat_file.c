#include <stdio.h>
int main(){
   FILE * file;
   if (file = fopen("hello.txt", "w")){
      printf("File opened successfully in write mode or a new file is created\n");
      
      fputs("hello world",file);
      printf("done\n");
   }
   else
   printf("Error!");
   fclose(file);
   return 0;
}


//File opened successfully in write mode or a new file is created
done
