/*
 * Exercise7.c
 *
 *  Created on: Jan 13, 2021
 *      Author: Muhammad Farid
 */

#include<stdio.h>
#define SIZE 100

int main(void){
	int arr[SIZE];
	arr[0]=1;
	int i;
	int num_index;

	scanf("%d",&num_index);

	for(i=1 ; i<SIZE ; i++){
		arr[i] = arr[i-1] + 2;
	}

	printf("Element %d is %d" ,num_index, arr[num_index-1]);
	return 0;
}
