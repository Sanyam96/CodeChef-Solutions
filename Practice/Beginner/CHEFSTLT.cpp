#include <bits/stdc++.h>
using namespace std;
 
int main(int argc, char const *argv[]){
 
	int tc;
	cin >> tc;
	while(tc--) {
		string s1,s2;
		cin >> s1;
		cin >> s2;
 
		int l1 = s1.length();
		int l2 = s2.length();
 
		if(l1 != l2) {
			return 0;
		}
 
		int minCount = 0;
		int maxCount = 0;
 
		for (int i = 0; i < l1; ++i) {
			if ( ((s1[i] != '?') && (s2[i] != '?')) && (s1[i] != s2[i] ) ) {
				minCount++;
				maxCount++;
			}
			// else if( s1[i] == '?' && s2[i] == '?' ) {
			// 	maxCount++;
			// }
			else if ( s1[i] == '?' || s2[i] == '?' ) {
				maxCount++;
			}
		}
 
		cout << minCount << " " << maxCount << endl;
	}
    return 0;
}