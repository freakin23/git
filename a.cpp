#include <bits/stdc++.h>

void io() {
    int a, b;
    std::cin >> a >> b;
    std::cout << a << " " << b << '\n';
}

bool palindrome(std::string st) {
    int n = (int)st.size();
    for (int i = 0; i < n / 2; i++) {
        if (st[i] != st[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::cout << "Hello Git" << '\n';
    io();
    
    std::cout << (palindrome("racecar") ? "Is Palindrome" : "Not Palindrome") << '\n';
    return 0;
}