// Small factorials		| Problem Code: FCTRL2
/*

You are asked to calculate factorials of some small positive integers.

Input
An integer t, 1<=t<=100, denoting the number of testcases, followed by t lines, each containing a single integer n, 1<=n<=100.

Output
For each integer n given at input, display a line with the value of n!

Example
Sample input:
4
1
2
5
3
Sample output:

1
2
120
6

*/

#include <bits/stdc++.h>
#define MAX 500
using namespace std;

int main() {

	int tc;
	cin >> tc;

	while( tc-- ) {

		int n;
		int a[MAX];
		scanf( "%d", &n);

		if( n == 0 || n == 1) {
			cout << "1";
		}
		else {
			int i = 0;
			int x = n;
			int y;
			int m = 0;
			int j;
		
			while( x != 0 ) {
				a[i++] = x % 10;
				x = x / 10;
				m++;
			}

			for( i = n; i > 1; i--) {
				int temp=0;
				int c=i-1;
				for( j = 0; j < m; j++) {
					y = a[j] * c + temp;
					a[j] = y % 10;
					temp = y / 10;
				}
				while( temp != 0) {
					a[m++] = temp % 10;
					temp /= 10;
				}
			}
			for( i = m-1; i >= 0; i--) {
				printf( "%d", a[i]);
			}
		}
		
		printf("\n");

	}

	return 0;
}