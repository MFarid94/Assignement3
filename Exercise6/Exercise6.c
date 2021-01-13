/*
 * Exercise6.c
 *
 *  Created on: Jan 13, 2021
 *      Author: Muhammad Farid
 */

#include<stdio.h>

/* A function that return the index of a given element's
 *  last occurrence using linear search algorithm*/
int LinearSearch(int arr[] , int element , int size){
	int i;

	/* A loop starting from last index and check till it reach first element */
	for(i=(size-1); i >=0 ; i--){

		if(arr[i] == element){
			return i;		/* Returning index of required element */
		}
	}

	return -1;
}

int main(void){
		setvbuf(stdout , NULL , _IONBF , 0);
		setvbuf(stderr , NULL , _IONBF , 0);
		int i ;
		int size = 6;
		int arr[size];
		int result, element;
		printf("Enter array of numbers:");

		/* Scanning for array elements from user */
		for(i=0 ; i<size ; i++){
			scanf("%d",&arr[i]);
		}

		printf("Enter required element:");

		/* Scanning for the required number to be selected */
		scanf("%d",&element);

		/* Passing array and the required number and having the function return the index */
		result = LinearSearch(arr, element ,size);

		if(result == -1){
			printf("Item is not on the list");
		}
		else{
			printf("The index of required item is %d",result);
		}
		return 0;
}
