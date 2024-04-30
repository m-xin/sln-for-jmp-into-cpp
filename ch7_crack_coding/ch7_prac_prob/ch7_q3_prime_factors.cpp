#include <cmath>
#include <iostream>
#include <vector>

/*
 1. all prime numbers would be filtered first, since its factor can only have itself and 1, while 1 is not prime factor, so, use the sum = 1 + prime # itself is an illegal selection, even though, the sum could be a prime number, for example, 2 = 1 x 2, such that 1 + 2 = 3, which is a prime number, but this number is illegal. so first step is to kick out 1 and all prime numbers.

 2. we woud not use the helper function provided by the book, and use a more efficient method to find prime numbers.

 3. to minimize the calculation, the vector of STL is used here
*/

bool isPrime(int n) {
    // Handle special cases for 1 and smaller numbers
    if (n <= 1) return false;
    if (n <= 3) return true;

    // Check if the number is divisible by 2 or 3
    if (n % 2 == 0 || n % 3 == 0) return false;

    // Check for all possible prime factors up to the square root of the number
    for (size_t i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

// Function to find the prime factors of a number
std::vector<int> findPrimeFactor(int n) {
    std::vector<int> prime_factors;
    // Handle the case where 2 is a factor
    while (n % 2 == 0) {
        prime_factors.push_back(2);
        n = n / 2;
    }

    for (size_t i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            prime_factors.push_back(i);
            n = n / i;
        }
    }

    // If the remaining number is greater than 2, it is a prime factor
    if (n > 2) {
        prime_factors.push_back(n);
    }

    return prime_factors;
}

// Function to find the sum of prime factors
int sumOfPrimeFactors(int n) {
    std::vector<int> prime_factor = findPrimeFactor(n);
    int sum = 0;
    for (int factor : prime_factor) {
        sum += factor;
    }
    return sum;
}

int main() {
    std::cout << "Check the numbers between 1 ~ 1000, whose sum of prime factors is a prime number: ";
    for (size_t i = 1; i <= 1000; i++) {
        if (!isPrime(i)) {
            int sum = sumOfPrimeFactors(i);
            if (isPrime(sum)) {
                std::cout << i << "(sum of prime factors: " << sum << ")" << std::endl;
            }
        }
    }
    return 0;
}
