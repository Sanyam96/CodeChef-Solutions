/*
	Codechef Solution for COOK82A
*/
#include <bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin >> t;

	string teams[4];
	int goals[4];
	// R->0
	// M->1
	// B->2
	// E->3
	while( t-- ) {
		string team;
		int goal;
		for (int i = 0; i < 4; ++i)
		{
			/* code */
			cin >> team >> goal;
			if(team[0] == 'R') {
				goals[0] = goal; 
			}
			else if( team[0] == 'M') {
				goals[1] = goal;
			}
			else if( team[0] == 'B') {
				goals[2] = goal;
			}
			else if( team[0] == 'E') {
				goals[3] = goal;
			}
		}
		if( (goals[0] < goals[1]) && (goals[2] > goals[3]) ) {
			cout << "Barcelona\n";
		}
		else {
			cout << "RealMadrid\n";
		}
	}
    return 0;
}
