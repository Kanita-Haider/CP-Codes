#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<long long int> sieve(long long int max_limit) {
    vector<long long int> is_prime(max_limit +1 , 1); // 1 means prime, 0 means not prime
    is_prime[0] = is_prime[1] = 0;
    for (long long int i = 2; i * i <= max_limit; ++i) {
        if (is_prime[i]) {
            for (long long int j = i * i; j <= max_limit; j += i) {
                is_prime[j] = 0;
            }
        }
    }
    return is_prime;
}

int main() {
    const long long int MAX_LIMIT = 58150;
    vector<long long int> is_prime = sieve(MAX_LIMIT);
    vector<long long int> primes;
    set<long long int> eith_primes;

    // Collecting all prime numbers up to MAX_LIMIT
    for (long long int i = 2; i <= MAX_LIMIT; ++i) {
        if (is_prime[i]) {
            primes.push_back(i);
        }
    }

    // Generating Eith primes
    for (long long int i = 0; i < primes.size(); ++i) {
        for (long long int j = i + 1; j < primes.size(); ++j) {
            long long int sum = primes[i] + primes[j];
            if (sum <= MAX_LIMIT && is_prime[sum]) {
                eith_primes.insert(sum);
            }
        }
    }

    // Convert the set to a sorted vector
    vector<long long int> eith_prime_list(eith_primes.begin(), eith_primes.end());

    long long int N;
    while (cin >> N) {
        if (N > 0 && N <= eith_prime_list.size()) {
            cout << eith_prime_list[N - 1] << endl; // N-th Eith prime
        }
    }

    return 0;
}
