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

	for(i=1 ; i<SIZE ; i++){
		arr[i] = arr[i-1] + 2;
	}

	printf("Element %dth is %d" ,SIZE , arr[SIZE-1]);
	return 0;
}
