#include <iostream>
using namespace std;

// using sieve of eratosthenes can save a lot of times.

bool prime[1000]

void sieveOfEratosthenes(bool prime[]) {
    memset(prime, true, sizeof(prime));
    prime[0] = false;
    prime[1] = false;
    for(int i = 2; i*i <n; ++i){
        if(prime[i]) {
            for(int j = i*i ; j<=n; j += i) prime[j] = false;
        }
    }
}

// the complexity of this classic sieve of eratosthenes is O(nlog(log n)).

int main() {
    int i, n;
    bool isPrime = true;

    cout << "Enter a positive integer: ";
    cin >> n;

    // 0 and 1 are not prime numbers
    if (n == 0 || n == 1) {
        isPrime = false;
    }
    else {
        for (i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    if (isPrime)
        cout << n << " is a prime number";
    else
        cout << n << " is not a prime number";

    return 0;
}
