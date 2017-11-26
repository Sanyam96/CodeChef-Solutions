#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){

	int tc;
	cin >> tc;
	while(tc--) {
		int no;
		cin >> no;
		int tempNo = 1;
		while(tempNo * tempNo <= no) {
			tempNo++;
		}
		cout << tempNo-1 << endl;
	}
    return 0;
}
