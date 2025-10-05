#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int n) {
    // Numbers less than or equal to 1 are not prime
    if (n <= 1)
        return false;

    // Check divisibility from 2 to the square root of n
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)  
            return false;

    // If no divisors were found, n is prime
    return true;
}

int main() {
    int n = 7; 
    if( isPrime(n)) printf("%s","true");
  	else printf("%s","false");
    return 0;
}
