/*
 * Exercise13.c
 *
 *  Created on: Jan 13, 2021
 *      Author: Muhammad Farid
 */

#include<stdio.h>

/* A function that removes all characters from string except for alphabets */
void RemoveCharacters(char str[]){
	int i = 0;
	int j = 0;

	/* A loop that iterates all characters of a string */
	while(str[i] != '\0'){

		/* A condition to check if current character is not an alphabet */
		if(!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))){
			j = i;

			/* A loop that overwrite current non-alphabet character with next character in the string */
			while(str[j] != '\0'){
			str[j] = str[j+1];
			j++;
			}
		}
		i++;
	}
}

int main(void){
	setvbuf(stdout , NULL , _IONBF , 0);
	setvbuf(stderr , NULL , _IONBF , 0);

	char str[30];

	printf("Enter String: ");

	/* Scanning user for input string */
	gets(str);

	/* Displaying string before removal of non-alphabet characters */
	printf("String before polishing: %s",str);

	/* Passing string to function for the removal of non-alphabet characters*/
	RemoveCharacters(str);

	printf("\n");

	/* Displaying string after removal of non-alphabet characters */
	printf("String after polishing: %s",str);

	return 0;
}
