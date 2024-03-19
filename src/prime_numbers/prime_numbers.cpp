#include "prime_numbers.h"

int *get_primes(const int n) {
    if (n < 1) {
        return nullptr;
    }
    int *result = new int[n];
    int candidate = 2, numOfPrimeFound = 0;
    while (numOfPrimeFound < n) {
        bool foundDivider = false;

        // a prime can only be divisible by 1 and itself,
        // so if a number x if not divisible by any number
        // between 2 and x-1, it is a prime number
        for (int i = 2; i < candidate; i++) {
            if (candidate % i == 0) {
                foundDivider = true;
                break;
            }
        }
        if (!foundDivider) {
            result[numOfPrimeFound++] = candidate;
        }
        candidate++;
    }

    return result;
}