/*****************
*songs.c
*Author:Hunter Loftis
*Program that fills an array with three songs and allows the user to edit the array
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//make struct for songs with provided attributes
struct Song {
  char title[32];
  char artist[32];
  int minutes;
  int seconds;
  float dance;
};

//function to print an array of song structs as a table
void printSongs(struct Song *s, int len) {
  int i = 0;
  for (i =0;i<len;i++) {
    printf("%d) %-20s",i,s[i].title);
    printf("artist: %-20s",s[i].artist);
    printf("duration: %d:%d  ",s[i].minutes,s[i].seconds);
    printf("danceability: %.2f\n",s[i].dance);
  }
}


int main() {
//making 3 instances of the song struct
  struct Song s1;
  strcpy(s1.title,"Shout");
  strcpy(s1.artist,"Tears for Fears");
  s1.minutes = 4;
  s1.seconds = 11;
  s1.dance = 0.50;

  struct Song s2;
  strcpy(s2.title, "As it was");
  strcpy(s2.artist, "Harry Styles");
  s2.minutes = 2;
  s2.seconds = 47;
  s2.dance = 0.70;

  struct Song s3;
  strcpy(s3.title,"Wish you were here");
  strcpy(s3.artist, "Pink Floyd");
  s3.minutes = 5;
  s3.seconds = 34;
  s3.dance = 0.30;

//make array of songs and put above instances into it
  struct Song song_arr[3];
  song_arr[0]=s1;
  song_arr[1]=s2;
  song_arr[2]=s3;

  printf("Welcome to Insert Name's Song List.\n\n");

  printSongs(song_arr, 3);

  printf("\n\n Enter a song id to edit [0,1,2]: ");
  int songid = 0;
  scanf("%d", &songid);

//ensures a valid song id is entered
  if(songid<0 || songid>2){
    printf("Invalid song id\n");
    return 1;
  }

  printf("Which attribute do you wish to edit? [artist, title, duration, danceability]: ");
  char attr[32];
  scanf("%s",attr);

//if else statement to edit correct attribute based on user input
  if (strcmp("artist",attr) == 0) {
    printf("Enter an artist: ");
    char artist[32];
    scanf(" %[^\n]%*c",artist);
    strcpy(song_arr[songid].artist, artist);
  } else if (strcmp("title",attr) == 0) {
    printf("Enter a title: ");
    char title[32];
    scanf(" %[^\n]%*c",title);
    strcpy(song_arr[songid].title, title);
  } else if (strcmp("duration",attr) == 0) {
    printf("Enter a duration (minutes): ");
    int min;
    int sec;
    scanf("%d", &min);
    song_arr[songid].minutes=min;
    printf("Enter a duration (seconds): ");
    scanf("%d", &sec);
    song_arr[songid].seconds=sec;
  } else if (strcmp("danceability",attr) == 0) {
    printf("Enter danceability: ");
    float dance;
    scanf("%f",&dance);
    song_arr[songid].dance=dance;
  } else {
    printf("Invalid attribute!\n");
    return 1;
  }

  printSongs(song_arr, 3);

  return 0;
}

