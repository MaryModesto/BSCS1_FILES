#include <stdio.h>
#include <stdlib.h>
#define MAX 100

void display(int arr[], int *count);
int *return_even(int arr[], int count);

int main()
{
	int input[MAX], num = 0;
	
	printf("Amount of numbers in array: ");
	scanf("%d", &num);
	
	for (int i = 0; i != num; ++i) {
		scanf("%d", input[i]);
	}
	
	display(input, num);
	return 0;
}

void display(int arr[], int *count) {
	printf("Array List: ");
	printf("[");
	for (int i = 0; i != count; ++i) {
		printf("%i", arr[i]);
		
		if (i < count - 1) {
			printf("|");
		}
	}
	printf("]");
} 

int *return_even(int arr[], int count) {
	
}
