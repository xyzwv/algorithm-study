#include <iostream>

using namespace std;

int main() {
	int x, n, a, b, sum=0;
	cin >> x >> n;
	for(int i=0; i<n; i++) {
		cin >> a >> b;
		sum += a*b;
	}
	sum == x ? cout << "Yes" : cout << "No";
	return 0;
}