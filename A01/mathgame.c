/***************************************************
 * mathgame.c
 * Author: Hunter Loftis 
 * Implements a math game
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
printf("Welcome to Math Game!\n How many rounds do you want to play?\n");
int response= 0;
int correct = 0;
scanf("%d",&response);
int answer = 0;
int i = 0;

time_t t;
srand((unsigned) time(&t));
	for (i =0;i<response;i++) {
	int a = rand()%10+1;
	int b = rand()%10+1;
	int c = a+b;
	printf("%d + %d=?\n",a,b);
	scanf("%d",&answer);
		if(answer == c){
			printf("Correct!\n");
			correct ++;
		} else { printf("Incorrect :(\n");} 
	}
printf("You answered %d out of %d questions correctly! Thanks for playing!\n",correct,response);
  return 0;
}
