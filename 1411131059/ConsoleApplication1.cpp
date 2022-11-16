#include <stdio.h>
#define SIZE 5

void modifyArray(int b[], int size);

int main(void)
{
	int n[SIZE] = { 19,3,15,7,11 };

	printf("%s%13s%17s\n", "Element", "Value", "Histogram");

	modifyArray(n, SIZE);
}

void modifyArray(int b[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%7u%13d  	    ", i, b[i]);

		for (int j = 1; j <= b[i]; j++)
		{
			printf("*");
		}
		puts("");
	}
	
}
