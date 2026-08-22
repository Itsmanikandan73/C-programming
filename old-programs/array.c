#include <stdio.h>
// In this program we are going to checkout the one and two dimentional array
void numbers(void);
void vowels(void);
void numbers2(void);

int main(int argc, char **argv) {
	numbers();
	printf("\n");
	vowels();
	numbers2();
	
	return 0;
}

void vowels(void) {
	char vowels[1][5] = {{'a','e','i','o','u'}};
	
	for (int i = 0; i < 5; i++) {
		fprintf(stdout, "%c   ", vowels[0][i]);
	}
	printf("\n");
}

void numbers(void) {
	int numbers[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			fprintf(stdout, "%d\t", numbers[i][j]);
		}
		printf("\n");
	}
}

void numbers2(void) {
	int number[5];
	
	number[0] = 2;
	number[1] = 4;
	number[2] = 6;
	number[3] = 8;
	number[4] = 10;
	
	fprintf(stdout,"\nThe number[3] = %d\n", number[3]);
}
