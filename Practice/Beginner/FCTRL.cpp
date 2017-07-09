// Factorial
#include <bits/stdc++.h>
using namespace std;

int main() {

    int tc;
    int zeros;
    float power;
    int number;

    cin >> tc;

    for (int i = 0; i < tc; ++i)
    {   zeros = 0;
        power = 1.0;
        cin >> number;

        while( pow(5.0,power) <= number )
        {   
            zeros += number/pow(5.0,power);
            power += 1.0;   
        }
        printf("%d\n",zeros);
    }
}
