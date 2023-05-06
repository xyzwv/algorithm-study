#include <stdio.h>
#include <string.h>
#define MAX 1001

int main() {
	int test;
	int i;
	char input[10][MAX] = { '\0' };
	char output[10][2];
	scanf("%d", &test);

	for (i = 0; i < test; i++)
		scanf("%s", input[i]);

	for (i = 0; i < test; i++) {		
		output[i][0] = input[i][0];
		output[i][1] = input[i][strlen(input[i]) - 1];
	}

	for (i = 0; i < test; i++)
		printf("%c%c\n", output[i][0], output[i][1]);

	return 0;
}