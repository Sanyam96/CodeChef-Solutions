#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){

	int tc;
	cin >> tc;

	while(tc--) {
		int number;
		cin >> number;

		int sum = 0;
		int temp = 0;
		sum += number%10;
		if( number >= 1 && number <= 9) {
			sum += number%10;
			cout << sum << endl;
		}
		else {
			number /= 10;
			while(number > 9) {
				number /= 10;
			}
			sum += number%10;
		}

		cout << sum << endl;
	}
    return 0;
}
