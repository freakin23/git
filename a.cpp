#include <bits/stdc++.h>

void io() {
    int a, b;
    std::cin >> a >> b;
    std::cout << a << " " << b << '\n';
}

<<<<<<< HEAD
bool palindrome(std::string st) {
    int n = (int)st.size();
    for (int i = 0; i < n / 2; i++) {
        if (st[i] != st[n - i - 1]) {
            return false;
        }
    }
    return true;
=======
bool evenOdd(int n) {
    return (n & 1);
>>>>>>> branch2
}

int main() {
    std::cout << "Hello Git" << '\n';
    io();
    
<<<<<<< HEAD
    std::cout << (palindrome("racecar") ? "Is Palindrome" : "Not Palindrome") << '\n';
=======
    int n = 5;
    std::cout << (evenOdd(n) ? "Odd" : "Even") << '\n';
>>>>>>> branch2
    return 0;
}