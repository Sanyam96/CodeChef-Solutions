// Sum of Digits 	| Problem Code: FLOW006
/*

Input
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.

Output
Calculate the sum of digits of N.

Constraints
1 ≤ T ≤ 1000
1 ≤ N ≤ 100000

Example
Input
3 
12345
31203
2123
Output
15
9
8

*/

#include <bits/stdc++.h>
using namespace std;

int main() {

	int tc;
	cin >> tc;
	while(tc--) {
		int n;
		cin >> n;
		int temp = n;
		int sum = 0;
		while(temp > 0) {
			sum += temp%10;
			temp /= 10;
		}
		cout << sum << endl;
	}
    return 0;
}
