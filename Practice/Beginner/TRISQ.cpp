#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){

	int tc;
	// cout << 0/2 << "-> 0" << endl;
	// cout << 1/2 << "-> 1" << endl;
	// cout << 2/2 << "-> 2" << endl;
	// cout << 3/2 << "-> 3" << endl;
	// cout << 4/2 << "-> 4" << endl;
	// cout << 5/2 << "-> 5" << endl;
	// cout << 6/2 << "-> 6" << endl;
	// cout << 7/2 << "-> 7" << endl;
	// cout << 8/2 << "-> 8" << endl;
	// cout << 9/2 << "-> 9" << endl;
	// cout << 10/2 << "-> 10" << endl;
	// cout << 11/2 << "-> 11" << endl;
	// cout << 12/2 << "-> 12" << endl;
	// cout << 13/2 << "-> 13" << endl;
	// cout << 14/2 << "-> 14" << endl;
	// cout << 15/2 << "-> 15" << endl;
	// cout << 16/2 << "-> 16" << endl;
	// cout << 17/2 << "-> 17" << endl;
	// cout << 18/2 << "-> 18" << endl;
	// cout << 19/2 << "-> 19" << endl;
	// cout << 20/2 << "-> 20" << endl;
	// cout << 21/2 << "-> 21" << endl;
	// cout << 22/2 << "-> 22" << endl;
	// cout << 23/2 << "-> 23" << endl;
	cin >> tc;
	int arr[10000] = {0};
	arr[0] = 0;
	for (int i = 1; i < 10000; ++i) {
		arr[i] = arr[i-1] + i;
	}
	// for (int i = 0; i < 30; ++i) {
	// 	cout << "i -> " << i << " " << arr[i] << endl;
	// }
	while(tc--) {
		int no;
		cin >> no;
		int countOfArray = 0;
		countOfArray = no / 2;
		countOfArray--;

		if(countOfArray < 1) {
			cout << "0" << endl;
		}
		else {
			cout << arr[countOfArray] << endl;
		}
	}
    return 0;
}
