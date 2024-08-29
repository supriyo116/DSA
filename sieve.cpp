#include <iostream>
#include <vector>

using namespace std;

vector<int> primeSieve(int n) {
    vector<int> primes;
    vector<bool> isPrime(n + 1, true); // Initialize all numbers as prime
    isPrime[0] = isPrime[1] = false;   // 0 and 1 are not primes

    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) { // If i is a prime number
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false; // Mark multiples of i as non-prime
            }
        }
    }

    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            primes.push_back(i); // Collect all prime numbers
        }
    }

    return primes;
}

int main() {
    int n;
    cout << "Enter the upper limit: ";
    cin >> n;

    vector<int> primes = primeSieve(n);

    cout << "Prime numbers up to " << n << " are: ";
    for (int prime : primes) {
        cout << prime << " ";
    }
    cout << endl;

    return 0;
}
