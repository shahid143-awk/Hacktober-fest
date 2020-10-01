//Optimized Approach for getting GCD of two numbers
#include<bits/stdc++.h>
using namespace std;
// if d divides a and d divides b, then d also divides a − b.
// This function will calculate GCD with optimized approach
int EuclidGCD( int a, int b ) {
    int start = min(a,b);
    
    // base cases
    if( a == 0)
        return b;
    if( b == 0 )
        return a;
    
    // If a == b, stop -- the GCD of a and a is, of course, a
    if( a == b )
        return a;
    
    // If a > b, replace a with a − b
    if( a > b )
        return EuclidGCD(a-b,b);
    
    // If b > a, replace b with b − a 
    if( b > a )
        return EuclidGCD(a,b-a);

}
int main(void) {
    int a,b;
    cin >> a >> b;
    cout << "gcd of " << a << " and " << b <<" is "<< EuclidGCD(a,b);
    return 0;
}

/*
Input: 12 149
Output: gcd of 12 and 149 is 1
*/
    
