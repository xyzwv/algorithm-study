#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
	char str[MAX];
	gets(str);
	printf("%d", strlen(str));
	
	return 0;
}