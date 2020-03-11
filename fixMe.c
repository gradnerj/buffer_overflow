#include <stdio.h>
#include <string.h>


void pig_latin(char* input){

   char word[32];
   char* tok = strtok(input, " \r\n\t");
   char letter[2];
   letter[1] = '\0';
   while(tok){
      strcpy(word, tok+1);
      *letter = tok[0];
      strcat(word, letter);
      strcat(word, "ay");
      printf("%s ", word);
      tok = strtok(NULL, " \r\n\t");
   }

}


int main(int argc, char** argv){

   if (argc < 2){
       printf("Usage: fixMe \"<input_string>\"");
   }

   pig_latin(argv[1]);

}
