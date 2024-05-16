#include <bits/stdc++.h>

void io() {
    int a, b;
    std::cin >> a >> b;
    std::cout << a << " " << b << '\n';
}

bool evenOdd(int n) {
    return (n & 1);
}

int main() {
    std::cout << "Hello Git" << '\n';
    io();
    
    int n = 5;
    std::cout << (evenOdd(n) ? "Odd" : "Even") << '\n';
    return 0;
}