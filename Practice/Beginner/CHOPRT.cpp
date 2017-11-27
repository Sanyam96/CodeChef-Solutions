#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){

	int tc;
	cin >> tc;
	while(tc--) {
		int no1;
		cin >> no1;
		int no2;
		cin >> no2;

		if(no1 > no2) {
			cout << ">" << endl;
		}
		else if(no1 < no2) {
			cout << "<" << endl;	
		}
		else {
			cout << "=" << endl;
		}
	}
    return 0;
}
