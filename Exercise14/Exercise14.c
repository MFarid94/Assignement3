/*
 * Exercise14.c
 *
 *  Created on: Jan 13, 2021
 *      Author: Muhammad Farid
 */

#include<stdio.h>
#include<string.h>

/* A function that reverses a given string */
void ReverseString(char str[]){
	int len = strlen(str);
	int i ,temp;
	int length = len / 2;

	/* A loop for swapping string characters*/
	for(i=0 ; i < length ; i++){
		temp = str[i];
		str[i] = str[len - i -1];
		str[len - i -1] = temp;
	}
}

int main(void){
	setvbuf(stdout , NULL , _IONBF , 0);
	setvbuf(stderr , NULL , _IONBF , 0);

	char str[20];

	printf("Enter string: ");

	/* Scanning user for input string */
	gets(str);

	/* Displaying string before reversing */
	printf("String Before reversing: %s",str);

	/* Passing string to function for reversing */
	ReverseString(str);

	printf("\n");

	/* Displaying string after reversing */
	printf("String after reversing: %s",str);

	return 0;
}
