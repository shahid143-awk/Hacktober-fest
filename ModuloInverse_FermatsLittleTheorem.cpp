// Fermat’s Little Theorem 
#include<bits/stdc++.h>
using namespace std;

// This is the same power function of binary exponentiation
int power( int base , int n, int p) {
    int res = 1;
    while( n > 0 ) {
        if( n % 2 == 0 ) {
            base = ( base * base ) % p;
            n /= 2;
        }
        else{
            res = ( res * base ) % p;
            n--;
        }
    }
    return res;
}

int main() {
    int a,m; 
    cin >> a >> m;
    /* Here we are calculating a^m-2 % m for 
    getting a^-1 as stated in fermat's little theorem */
    
    cout << "modulo multiplicative inverse of " << a << " under mod " 
    << m << " is : " << power(a,m-2,m) << "\n"; // mod - m 
    return 0;
}

/*
Input: a = 2, m = 7
Output: modulo multiplicative inverse of 2 under mod 7 is : 4
*/
    
