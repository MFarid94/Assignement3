/*
 * Exercise4.c
 *
 *  Created on: Jan 12, 2021
 *      Author: Muhammad Farid
 */

#include<stdio.h>

/* A function that sorts an array in ascending order using selection sorting */
void SelectionSorting(int arr[],const int size ){
	int i , j , min , temp;

	/* A loop for sorting the given array using selection sorting */
	for(i = 0 ; i < (size-1) ; i++){
		/* Setting first element in array as minimum */
		min = i;

			for(j = i+1 ; j < size ; j++){

				if(arr[j]<arr[min]){
					min = j;
				}
			}

			/* swapping current index with minimum index */
			temp = arr[i];
			arr[i] = arr[min];
			arr[min] = temp;
	}
}

int main(void){
	setvbuf(stdout , NULL , _IONBF , 0);
	setvbuf(stderr , NULL , _IONBF , 0);
	int i ,j ,k;
	const int size = 5;
	int arr[size];

	printf("Enter array elements:\n");

	/* A loop for scanning array elements from user */
	for(i=0 ; i<size ; i++){
		scanf("%d",&arr[i]);
	}

	printf("Array before sorting:\n");

	/* A loop for displaying array before sorting */
	for(j=0 ; j<size ; j++){
		printf("%d\t",arr[j]);
	}

	/* Passing array to function in order to sort it */
	SelectionSorting(arr,size);

	printf("\n");
	printf("Array after sorting:\n");

	/* A loop for displaying array after being sorted */
	for(k=0 ; k<size ; k++){
		printf("%d\t",arr[k]);
	}

	return 0;
}
