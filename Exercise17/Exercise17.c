/*
 * Exercise17.c
 *
 *  Created on: Jan 13, 2021
 *      Author: Muhammad Farid
 */

#include<stdio.h>


int * Swap(int a_size,int *a,int b_size,int *b)
{
	int temp;
    int i;
	for(i=0;i<b_size;i++)
	{
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
	return a;
}


int main(void)
{
	setvbuf(stdout , NULL , _IONBF , 0);
	setvbuf(stderr , NULL , _IONBF , 0);

	int i;
	int a_size = 10;
	int b_size = 5;
	int array_A[a_size];
	int array_B[b_size];

	printf("Enter Array A elements: ");
	/* Scanning for array A elements */
	for(i=0 ; i < a_size ; i++){
		scanf("%d",&array_A[i]);
			}

	printf("\n");

	printf("Enter Array B elements: ");
	/* Scanning for array B elements */
	for(i=0 ; i < b_size ; i++){
		scanf("%d",&array_B[i]);
		}

	printf("Array A before the Swap : ");
	/* Print the array1 before call the swap function */
	for(i=0;i<a_size;i++)
	{
		printf("%d ",array_A[i]);
	}
	printf("\n");

	printf("Array B before the Swap : ");
	/* Print the array2 before call the swap function */
	for(i=0;i<b_size;i++)
	{
		printf("%d ",array_B[i]);
	}
	printf("\n");

	Swap(a_size,array_A,b_size,array_B);

	printf("Array A after the Swap : ");
	/* Print the array1 after call the swap function */
	for(i=0;i<b_size;i++)
	{
		printf("%d ",array_A[i]);
	}
	printf("\n");

	printf("Array B after the Swap : ");
	/* Print the array2 after call the swap function */
	for(i=0;i<b_size;i++)
	{
		printf("%d ",array_B[i]);
	}
	printf("\n");
	return 0;
}
