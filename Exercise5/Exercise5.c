/*
 * Exercise5.c
 *
 *  Created on: Jan 12, 2021
 *      Author: Muhammad Farid
 */

#include<stdio.h>

/* A function that return the index of a required item */
int LinearSearch(int arr[] , int element , int size ){
	int i;

	/* Looping on array elements and comparing them to given number */
	for(i =0; i <size ; i++){
		if(arr[i] == element)
			return i;			/* return index of required element*/
	}
	return -1;  /* return -1 incase given number is not on the list */
}

int main(void){
	setvbuf(stdout , NULL , _IONBF , 0);
	setvbuf(stderr , NULL , _IONBF , 0);
	int i ;
	int size = 5;
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

