
#include <stdio.h>
int main(){
   FILE * file;
   if (file = fopen("hello.txt", "a")){
      printf("File opened successfully in write mode or a new file is created\n");
      char arr[]="india";
      fputs(arr,file);
      
      
      printf("done\n");
   }
   else
   printf("Error!");
   fclose(file);
   return 0;
}


//
File opened successfully in write mode or a new file is created
done
