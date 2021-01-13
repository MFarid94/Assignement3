/*
 * Exercise9.c
 *
 *  Created on: Jan 13, 2021
 *      Author: Muhammad Farid
 */

#include<stdio.h>
#define SIZE 20
#define FOR_WHILE 1
#define RECURSIVE 2

/* A function that implement Fibonacci sequence in an array
 * and return a specific element according to a given index*/
int ForFibonacci(int arr[],int index){
	int i;

	/* Setting the first two elements to 1 */
	arr[0] = 1;
	arr[1] = 1;

	/* A loop that fill in the Fibonacci sequence in an array according to a given index */
	for( i=2 ; i<(SIZE-1) ; i++ ){
		arr[i] = arr[i-1] + arr[i-2];
	}

	/* Returning the element corresponding to given index */
	return arr[index];
}

/* A function that calculates the fibonnaci element in the sequence
 * corresponding to a given index using recursive methods*/
long RecursiveFibonacci(long index){

	if(index == 0 || index == 1){
		return 1;
	}
	else{
		return RecursiveFibonacci(index-2) + RecursiveFibonacci(index-1);
	}
}

int main(void){
	setvbuf(stdout , NULL , _IONBF , 0);
	setvbuf(stderr , NULL , _IONBF , 0);

	int arr[SIZE];
	int function_type;  																	/* A variable that help chose between either Recursive or loop method */
	int index;
	int result_forwhile;
	long result_fibo;

	/* Scanning the required index from the user */
	printf("Enter required element in Fibonacci series: ");
	scanf("%d",&index);
	printf("\n");

	/* Scanning the type of functionality from the user */
	printf("Type 1 for ForWhile function or type 2 for Recursive function: ");
	scanf("%d",&function_type);

	if(function_type == FOR_WHILE){

		/* Passing array and required index to for loop function */
		result_forwhile = ForFibonacci(arr,index);
		printf("The %d element in fibonacci series is %d",index,result_forwhile);
	}
	else if(function_type == RECURSIVE){

		/* Passing required index to Recursive function */
		result_fibo = RecursiveFibonacci(index);
		printf("The %d element in recursive fibonacci is %ld",index , result_fibo);
	}


	return 0;
}
