#include <stdio.h>
#define MAX 1000000

int arr[MAX];

int main() {
	
	int n;
	int min, max;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	min = max = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] > max)
			max = arr[i];
		if (arr[i] < min)
			min = arr[i];
	}

	printf("%d %d", min, max);

	return 0;
}