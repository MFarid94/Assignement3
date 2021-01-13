/*
 * Exercise12.c
 *
 *  Created on: Jan 13, 2021
 *      Author: Muhammad Farid
 */

#include<stdio.h>

/* A function that calculates the length of a given string */
int LengthOfString(char str[]){
	int i = 0;
	int count = 0;

	/* A loop to acquire the length of a given string */
	while(str[i] != '\0'){
		count++;
		i++;
	}

	/* returning length of given string */
	return count;
}

int main(void){
	setvbuf(stdout , NULL , _IONBF , 0);
	setvbuf(stderr , NULL , _IONBF , 0);

	char str[30];
	int count;

	printf("Enter a string: ");

	/* Scanning user for a string */
	gets(str);

	/* Passing string to function */
	count = LengthOfString(str);

	/* Displaying length of given string */
	printf("Length of given is %d",count);

	return 0;
}
