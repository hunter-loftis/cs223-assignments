/**********************
* exclaim.c
*Author: Hunter Loftis
*Program that turns a word into an exclamation
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//function that randomly chooses one of four symbols
char randomSymbol() {
  int randNum = rand()%4;
  if (randNum == 0) {
    return '@';
  } else if (randNum == 1) {
      return '!';
  } else if (randNum == 2) {
    return '#';
  } else  {
    return '*';
  }
}

int main() {
//scans user input
  printf("Enter a word: ");
  char buff[32];
  scanf("%s", buff);

  char result[32];
  int i=0;
  time_t t;
  srand((unsigned) time(&t));
//loops through word and re-assigns lowercase letters to random symbols
  for (i=0; i<32;i++) {
    if ((buff[i] > 96) && (buff[i] < 123)) {
      result[i] = randomSymbol();
    } else { result[i] = buff[i]; }
  }

  printf("OMG! %s \n", result);

  return 0;
}
