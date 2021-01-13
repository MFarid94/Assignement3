/*
 * Exercise16.c
 *
 *  Created on: Jan 13, 2021
 *      Author: Muhammad Farid
 */

#include<stdio.h>

/* A function that reverses a given array */
void ReverseArray(int arr[] ,int size){
	int i, temp;

	/* A loop for reversing array elements by swapping */
	for(i=0 ; i<size/2 ; i++){
		temp = arr[i];
		arr[i] = arr[size-1 - i];
		arr[size-1 -i] = temp;
	}
}

int main(void){
	setvbuf(stdout , NULL , _IONBF , 0);
	setvbuf(stderr , NULL , _IONBF , 0);

	int k , j;
	int size = 5;
	int arr[5];

	printf("Enter elements of array: ");

	/* Scanning array elements from user */
	for(k=0 ; k<size ; k++){
		scanf("%d",&arr[k]);
	}

	/* Passing array to reverse function */
	ReverseArray(arr,size);

	printf("Array after being reversed: ");
	/* Displaying array after being reversed */
	for(j=0 ; j<size ; j++){
		printf("%d ",arr[j]);
	}

	return 0;
}
