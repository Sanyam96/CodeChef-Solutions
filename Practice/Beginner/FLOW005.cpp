#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){

	int t,n,c;
	scanf("%d",&t);
	while(t--){
		c=0;
		scanf("%d",&n);
		while(n!=0){
			c++;
			if(n>=100){
				n-=100;
				continue;
			}
			else if(n>=50){
				n-=50;
				continue;
			}
			else if(n>=10){
				n-=10;
				continue;
			}
			else if(n>=5){
				n-=5;
				continue;
			}
			else if(n>=2){
				n-=2;
				continue;
			}
			else if(n>=1){
				n-=1;
				continue;
			}
		}
		printf("%d\n",c);
	}
    return 0;
}
