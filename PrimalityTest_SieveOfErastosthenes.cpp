// In this program we use Sieve of Erastothenes to check if a number is prime or not with O(1) time complexity for answering the query.
// This approach is helpful when the number of queries to be answered is very high.
#include<bits/stdc++.h>
using namespace std;

//array to store whether given number is prime or not
int is_prime[1000001];

//Function to implement sieve of erastothenes
void sieveOfErastothenes() {
  int maxN = 1000000;
  
  //Initializing entire array with 1
  for( int i = 1 ; i <= maxN ; i++ )
    is_prime[i] = 1; //marking all as prime initially
  
  //base cases
  is_prime[0] = is_prime[1] = 0;

  /*Iterating from 2 to srqt(maxN) and is current element is marked '1' we will mark all its multiples '0' */

  for( int i = 2 ; i <= sqrt(maxN) ; i++ ) {
    //Cheecking if current element is marked as prime or not
    if( is_prime[i] == 1 ){
      //marking all multiples of i(currently selected element) as '0'
      for( int j = i*i ; j <= maxN ; j += i )
        is_prime[j] = 0; //Not prime
    } //end of if block
  }
} //End of Sieve function

int main( void ) {
  //calling sieveOfErastothenes to generate is_prime array
  sieveOfErastothenes();
  
  int num = 133;

  if( is_prime[num] == 1 ) cout << num << " is prime\n";
  else cout << num << " is not prime\n";

  return 0;
}

/*
Ouput: 133 is not prime
*/
    
