/*
 * Exercise15.c
 *
 *  Created on: Jan 13, 2021
 *      Author: Muhammad Farid
 */

#include<stdio.h>
#include<string.h>

/* A function that concatenate two string without using strcat */
void StringConcatenate(char str1[] , char str2[]){
	int i;
	int length1 = strlen(str1);
	int length2 = strlen(str2);

	/* A loop for concatenating two strings */
	for(i=0 ; i<length2 ; i++){
		str1[length1 + i] = str2[i];
	}
}

int main(void){
	setvbuf(stdout , NULL , _IONBF , 0);
	setvbuf(stderr , NULL , _IONBF , 0);


	char str1[30];
	char str2[10];

	/* Scanning user for first string */
	printf("Enter first string: ");
	gets(str1);

	/* Scanning user for second string */
	printf("Enter second string: ");
	gets(str2);

	/* Displaying First and second string before concatenating */
	printf("first string before concatenating: %s\n",str1);
	printf("Second string before concatenating: %s\n",str2);

	/* Passing two strings for concatenate function */
	StringConcatenate(str1,str2);

	/* Displaying two strings after being concatenated */
	printf("Two strings after concatenating: %s\n",str1);

	return 0;
}
