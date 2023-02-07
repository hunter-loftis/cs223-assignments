/*****************
*acronym.c
*Author:Hunter Loftis
*Program that computes an acronym from a given phrase
*/

#include <stdio.h>

int main() {
//scans user input of phrase
  printf("Enter a phrase: ");
  char phrase[1024];
  scanf("%[^\n]%*c" ,phrase);

  char newPhrase[1024];
  int i = 0;
  int j = 0;
//adds all capital letters in phrase to a new string
  while (phrase[i]!= '\0'){
    if(phrase[i] > 64 && phrase[i] < 91) {
      newPhrase[j]=phrase[i];
      j++;
    }
  i++;
  }
  newPhrase[j]='\0'; //add null terminator to acronym
printf("Your acronym is %s \n", newPhrase);
  return 0;
}
