// Life, the Universe, and Everything 		|Problem Code: TEST
/*

Your program is to use the brute-force approach in order to find the Answer to Life, the Universe, and Everything. More precisely... rewrite small numbers from input to output. Stop processing input after reading in the number 42. All numbers at input are integers of one or two digits.

Example
Input:
1
2
88
42
99

Output:
1
2
88

*/

#include <stdio.h>
int main()
{
	int inp[50], i, j;
	j = 0;	
	while( inp[j-1] != 42)
	  {
	  	 scanf( "%d", &inp[j]);
  		 j++;  		 
  	  }   
    for( i = 0; i < j-1; i++)
       {
       	  printf( "%d\n", inp[i]);
       }
    return 0;
}  