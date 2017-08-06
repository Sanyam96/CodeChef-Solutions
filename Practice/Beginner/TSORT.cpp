// Turbo Sort   | Problem Code: TSORT
// Link: https://www.codechef.com/problems/TSORT
/*

All submissions for this problem are available.
Given the list of numbers, you are to sort them in non decreasing order.
Input
t – the number of numbers in list, then t lines follow [t <= 10^6]. 
Each line contains one integer: N [0 <= N <= 10^6]

Output
Output given numbers in non decreasing order.
Example
Input:

5
5
3
6
7
1
Output:

1
3
5
6
7

*/

#include <bits/stdc++.h>
#define MAX 100000
using namespace std;

int main() {

	int n;
	cin >> n;

	int * arr = NULL;
	arr = new int[n];
	// int arr[n];
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}

	sort(arr, arr+n);

	for (int i = 0; i < n; ++i)	{
		cout << arr[i] << "\n";
	}


	delete [] arr;
	arr = NULL;
    return 0;
}


/*

-----------Allocate an array with code>new-----------
When the desired size of an array is known, allocate memory for it with the new operator and save the address of that memory in the pointer. Remember: Pointers may be subscripted just as arrays are. The example below reads in a number and allocates that size array.

int* a = NULL;   // Pointer to int, initialize to nothing.
int n;           // Size needed for array
cin >> n;        // Read in the size
a = new int[n];  // Allocate n ints and save ptr in a.
for (int i=0; i<n; i++) {
    a[i] = 0;    // Initialize all elements to zero.
}
. . .  // Use a as a normal array
delete [] a;  // When done, free memory pointed to by a.
a = NULL;     // Clear a to prevent using invalid memory reference.


-----------Freeing memory with delete-----------
When you are finished with dynamically allocated memory, free it with the delete operator. After memory is freed, it can be reused by later new requests. Memory that your program didn't free will be freed when the program terminates. Never free memory that wasn't dynamically allocated - the results are unpredictable.

delete [] a;  // Free memory allocated for the a array.
a = NULL;     // Be sure the deallocated memory isn't used.

*/
