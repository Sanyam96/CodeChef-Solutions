#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){

	int tc;
	cin >> tc;
	while(tc--) {
		int d,n;
		cin >> d >> n;
		for(int i=0;i<d;i++){
      		n=n*(n+1)/2;
    	}
    	cout<<n<<endl;
	}
    return 0;
}
