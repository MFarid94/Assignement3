/*
 * Exercise10.c
 *
 *  Created on: Jan 13, 2021
 *      Author: Muhammad Farid
 */

#include<stdio.h>

/* A function that converts any uppercase letter in a string to lowercase letter */
void ConvertToLowerCase(char str[]){
	int i =0;

	/* A loop that iterates all characters of a string */
	while(str[i] != '\0'){
		/* Incase a letter is uppercase , convert it to lowercase by subtracting 32 from it*/
		if( (str[i] >= 'A') && (str[i] <= 'Z') ){
			str[i] = str[i] + 32;
		}
		i++;
	}
}

int main(void){
	setvbuf(stdout , NULL , _IONBF , 0);
	setvbuf(stderr , NULL , _IONBF , 0);

	char str[30];

	/* Scanning user for input string */
	gets(str);

	/* Displaying string before convertion */
	printf("Text Before convertion: %s",str);

	/* Passing string to function */
	ConvertToLowerCase(str);

	printf("\n");

	/* Displaying code after convertion */
	printf("Text After convertion: %s",str);

	return 0;
}
