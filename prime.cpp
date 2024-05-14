#include <bits/stdc++.h>

bool checkPrime(int n) {
    if (n == 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    std::cout << "Enter a number to check whether it's prime or not: ";
    std::cin >> n;
    if (checkPrime(n)) {
        std::cout << n << " is a Prime number" << '\n';
    } else {
        std::cout << n << " is not a Prime number" << '\n';
    }

}