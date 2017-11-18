#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {

	long long int tc;
	cin >> tc;

	while(tc--) {
		long long int number, m;
		cin >> number;
		// 12345
		long long int dig = 0;
		// while(number) {
		// 	dig = number % 10;
		// 	number /= 10;
		// 	cout << dig;
		// }
		while(number) {
            m=m*10 + (number %10);
            number /= 10;
        }
        printf("%lld\n",m);
		//cout << endl;
	}
    return 0;
}
