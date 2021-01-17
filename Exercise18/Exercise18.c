/*
 * Exercise18.c
 *
 *  Created on: Jan 17, 2021
 *      Author: Muhammad Farid
 */

#include<stdio.h>

/* A function that returns longest consecutive */
int LongestConsecutive(int arr[],int size , int element){
	int max_consec = 0;
	int count = 0;
	int i;
	int ahead , current;
	/* A loop to count consecutive occurrence of a given number */
	for(i = 0; i < size ; i++){

		ahead = arr[i+1];
		current = arr[i];

		/* counting the number of consecutive occurrence of required element */
		if(arr[i] == element){
			count++;

			/* Setting the maximum occurrence */
			if(count > max_consec){
				max_consec = count;
			}
		}

		/* Setting counter to zero when a change occure
		 * by comparing the element ahead to the current element */
		if( ahead != current){
			count = 0;
		}
	}

	return max_consec;
}


int main(void){
	setvbuf(stdout , NULL , _IONBF , 0);
	setvbuf(stderr , NULL , _IONBF , 0);

	int size = 15;
	int arr[size];
	int maximum , element;
	int i;

	printf("Enter array elements: ");

	/* Scanning user for array elements */
	for(i=0 ; i<size ; i++){
		scanf("%d",&arr[i]);
	}

	printf("\n");
	printf("Enter required element: ");

	/* Scanning user for required element */
	scanf("%d",&element);

	/* Passing array , size of array and required element */
	maximum = LongestConsecutive(arr , size , element);

	/* Displaying Longest consecutive number */
	printf("Longest consecutive number of element %d is %d",element ,maximum);

	return 0;
}
