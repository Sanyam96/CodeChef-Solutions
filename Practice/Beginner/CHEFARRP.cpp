#include <bits/stdc++.h>
using namespace std;
 
int main(int argc, char const *argv[]){
 
	int tc;
	cin >> tc;
 
	while(tc--) {
		int n;
		cin >> n;
		int arr[n];
 
		for (int i = 0; i < n; ++i) {
			cin >> arr[i];
		}
 
		int count = 0;
 
		for (int i = 0; i < n-1; i++) {
			int sum = arr[i];
			int prod = arr[i];
			for(int j = i+1; j < n; j++) {
				sum += arr[j];
				prod *= arr[j];
 
				if(sum == prod) {
					count++;
				}
			}
		}
		cout << count + n << endl; 
	}
    return 0;
}