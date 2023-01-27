#include <stdio.h>

int main()
{
	int number, i, j;
	
	printf("Please insert a number ");
	scanf("%d", &number);
	
	//for loop to print the box
	for (i = 0; i != number; i++) {
		for (j = 0; j != number; j++) {
			printf("*");
		}
		
		printf("\n");
	}
	return 0;
}
