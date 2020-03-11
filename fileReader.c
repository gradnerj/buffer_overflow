#include <stdio.h>
#include <string.h>

int main(int argc, char** argv){

   char filename[64];
   char word[128];
   if(argc < 2){
      printf("Filename:");
      fgets(filename, 64, stdin);
      filename[strcspn(filename, "\n")] = 0;
   }
   else{
      strncpy(filename, argv[1], 64);
      filename[63] = '\0';
   }
   FILE* fin = fopen(filename, "r");
   while(fscanf(fin, "%s", word)!=EOF){
      printf("%s\n", word);
   }
   fclose(fin);

}
