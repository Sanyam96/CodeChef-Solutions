#include <bits/stdc++.h>
using namespace std;
 
int main(int argc, char const *argv[]){
	
	int tc;
	cin >> tc;
	if(tc >=1 && tc <= 1000) {
		while(tc--) {
			int n;
			cin >> n;
			if(n >= -20 && n <= 20) {
				if( n < 10) {
					cout << "What an obedient servant you are!\n";
				}
				else {
					cout << "-1\n";
				}
			}
			
		}
	}
	
	return 0;
}