/*
 * Exercise19.c
 *
 *  Created on: Jan 17, 2021
 *      Author: Muhammad Farid
 */

#include<stdio.h>
#define TRUE 1
#define FALSE 0

/* A function that checks of two array are identical */
int CheckIdentical(int array_A[], int array_B[] ,int size){
	int i;

	/* A loop for iterating through both arrays elements
	 * in case corresponding elements are not equal
	 * we return a value of 1 */
	for(i=0 ; i<size ; i++){
		if(array_A[i] != array_B[i]){
			return 1;
		}
	}

	/* we return a value of 0 incase both arrays are identical */
	return 0;
}

int main(void){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int size = 5;
	int arrayA[size];
	int arrayB[size];
	int i;
	int result;

	printf("Enter array A elements: ");
	/* Scanning user for array A elements */
	for(i=0 ; i<size ; i++){
		scanf("%d",&arrayA[i]);
	}


	printf("Enter array B elements: ");
	/* Scanning user for array B elements */
	for(i=0 ; i<size ; i++){
		scanf("%d",&arrayB[i]);
	}

	/* Passing both arrays to be checked */
	result = CheckIdentical(arrayA, arrayB ,size);

	if(result == TRUE){
		printf("Two arrays are not identical");
	}
	else if(result == FALSE){
		printf("Two arrays are identical");
	}

	return 0;
}
