/*
 * Exercise11.c
 *
 *  Created on: Jan 13, 2021
 *      Author: Muhammad Farid
 */

#include<stdio.h>

/* A function that calculates the frequency of a certain character in a string */
int frequency(char str[] , char element){
	int i = 0;
	int count = 0;

	/* A loop that iterates on a given string */
	while(str[i] != '\0'){

		/* Each time to required character to be count is met
		 * we increment count variable and eventually return this count*/
		if(str[i] == element){
			count++;
		}
		i++;
	}
	return count;
}

int main(void){
	setvbuf(stdout , NULL , _IONBF , 0);
	setvbuf(stderr , NULL , _IONBF , 0);

	char str[30];
	char element;
	int count_frequency;

	printf("Enter a string: ");

	/* Scanning user for a string */
	gets(str);

	printf("Enter required character: ");

	/* Scanning user for required character to be counted */
	scanf("%c",&element);

	/* Passing string and required character to be counted to function */
	count_frequency = frequency(str,element);

	/* Displaying frequency of desired character in a string */
	printf("Frequency of character %c in the given string is %d",element,count_frequency);

	return 0;

}
