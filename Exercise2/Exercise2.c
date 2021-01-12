/*
 * Exercise2.c
 *
 *  Created on: Jan 12, 2021
 *      Author: Muhammad Farid
 */

#include<stdio.h>
#include<string.h>
#define TRUE 1
#define FALSE 0

int CheckString(char s[]){
	int i=0 ,j=0;
	int result = TRUE;

	/* A loop to check each character in the the string using selection-like sorting algorithm*/
	while(s[i] != '\0'){

		j = i+1;  /* setting two indices i as a fixed location and j as an incremental location */
			while(s[j] != '\0'){
				/* if two characters match a FALSE flag is returned */
				if(s[i] == s[j]){
					result = FALSE;
				}
				j++;
			}
			i++;
		}

		return result;
}

int main(void){
	int result;
	char str[20];
	gets(str);                       /* Scanning string from user using gets function */

	/* Passing string to checking function */
	result = CheckString(str);

	if(result == TRUE){
		printf("All Characters are distinct");
	}
	else if(result == FALSE){
		printf("Repeated characters exist");
	}
	return 0;
}
