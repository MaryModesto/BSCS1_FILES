#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int number;
	struct node *link;
}first;

void insertfunc(first num, first *next);

int main()
{
	struct node *head = NULL;
	head = (struct node *)malloc(sizeof(struct node));
	
	int num = 0;
	
	printf("How many numbers are you going for? ");
	scanf("%d", &num);
	
	
	
	return 0;
}

void insertfunc(first num, first *next) {
	struct node *temp = NULL;
	temp = (struct node *)malloc(sizeof(struct node));
	
	temp -> num = ;
}

