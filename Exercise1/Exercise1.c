/*
 * Exercise1.c
 * Created on: Jan 12, 2021
 * Author: Muhammad Farid
 *
 */

#include<stdio.h>

/* A function to calculate the sum of array elements */
int summation(const int numbers_size ,int* numbers){
	int i;
	int sum =0;

	/* A loop to sum the elements of the array */
	for(i=0 ; i<numbers_size ; i++){
		sum += numbers[i];
	}
	return sum;
}

int main(void){
	setvbuf(stdout , NULL , _IONBF , 0);
	setvbuf(stderr , NULL , _IONBF , 0);
	const int numbers_size = 4;
	int arr[numbers_size];
	int i;
	int sum;

	printf("Enter array elements:\n");

	 /* A loop for scanning array from user */
	for(i=0 ; i < numbers_size ; i++){
		scanf("%d",&arr[i]);
	}

	/* Pass the array and it's size to calculate the summation of it's elements */
	sum = summation(numbers_size , arr);

	printf("The summation of given numbers is %d",sum);
	return 0;
}
