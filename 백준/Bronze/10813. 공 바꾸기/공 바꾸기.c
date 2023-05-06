#include <stdio.h>
#define MAX 100
int main() {
	int arr[MAX];
	int n, m;
	int i, j;
	int temp = 0;
	int count = 0;
	scanf("%d %d", &n, &m);

	for (int k = 0; k < n; k++)
		arr[k] = k + 1;

	while (count < m) {
		scanf("%d %d", &i, &j);
		//i번 바구니와 j번 바구니 교환
		// -> i-1번 원소와 j-1번 원소 교환
		temp = arr[i - 1];
		arr[i - 1] = arr[j - 1];
		arr[j - 1] = temp;
		
		count++;
	}

	for (int k = 0; k < n; k++)
		printf("%d ", arr[k]);

	return 0;
}