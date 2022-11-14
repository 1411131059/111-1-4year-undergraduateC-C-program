﻿#include <stdio.h>
#define SIZE 5

void modifyArray(int n[], int size);

int main(void)
{
	int n[SIZE] = { 19,3,15,7,11 };

	printf("%s%13s%17s\n", "Element", "Value", "Histogram");

	modifyArray(n, SIZE);
}

void modifyArray(int n[], int size)
{
	for (int i = 0; i < SIZE; i++)
	{
		printf("%7u%13d  	    ", i, n[i]);

		for (int j = 0; j <= n[i]; j++)
		{
			printf("*");
		}
		puts("");
	}
	
}
