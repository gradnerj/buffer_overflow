#include <stdio.h>
#include <string.h>


void pig_latin(char* input){

   char word[32];
   char* tok = strtok(input, " \r\n\t");
   char letter[2];
   letter[1] = '\0';
   while(tok){
      strncpy(word, tok+1,30);
      *letter = tok[0];
      strncat(word, letter, 1);
      strncat(word, "ay", 2);
      printf("%s ", word);
      tok = strtok(NULL, " \r\n\t");
   }

}


int main(int argc, char** argv){

   if (argc < 2){
       printf("Usage: fixMe \"<input_string>\"");
       return 1;
   }

   pig_latin(argv[1]);

}
