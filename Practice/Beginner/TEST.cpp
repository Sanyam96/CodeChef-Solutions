#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){

	int inp[50], i, j;
	j = 0;

	while( inp[j-1] != 42) {
		scanf( "%d", &inp[j]);
		j++;  		 
	}   
    for( i = 0; i < j-1; i++) {
		printf( "%d\n", inp[i]);
	}
    return 0;
}
