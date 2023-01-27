#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 50

void reset_word(char string[], int *count);
void display(char string[]);
int lower_pos(char string[], int count);
int upper_pos(char string[], int count);
int not_alpha(char string[], int count);
void lower_to_upper(char string[], int count);
void upper_to_lower(char string[], int count);
void insert_firs(char string[], int *count);
void insert_last(char string[], int *count);

int main()
{
	int num = 0, value = 0;
	char hello[MAX] = "Hello, World";
	value = strlen(hello);

	//case descriptions
	actions:
	printf("\n\nActions:\n");
	printf("1 - Reset the word\n");
	printf("2 - Display current word\n");
	printf("3 - Tell you which positions are lowercase\n");
	printf("4 - Tell you which positions are uppercase\n");
	printf("5 - Tell you which positions are not alphabets\n");
	printf("6 - Change all lowercase to uppercase\n");
	printf("7 - Change all uppercase to lowercase\n");
	printf("8 - Insert a letter at the beginning\n");
	printf("9 - Insert a letter at the end\n");
	
	printf("\nHello there! How may I help you today? ");
	scanf("%i", &num);
	
	//switch cases
	switch (num) {
		case 1:
			reset_word(hello, &value);
			printf("%s", hello);
			goto actions;
	}
	
	return 0;
}

void reset_word(char string[], int *count) {
	string[MAX] = "Hello, World";
	*count = strlen(string);
}
