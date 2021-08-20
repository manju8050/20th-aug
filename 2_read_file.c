#include <stdio.h>
int main(){
   FILE * file;
   if (file = fopen("hello.txt", "r")){
      printf("File opened successfully in write mode or a new file is created\n");
      char arr[10];
      fgets(arr,6,file);
      printf("%s\n",arr);
      
      printf("done\n");
   }
   else
   printf("Error!");
   fclose(file);
   return 0;
}


//
File opened successfully in write mode or a new file is created
hello
done
