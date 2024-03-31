#include <bits/stdc++.h>
#include <string>

bool isDecimalBinary(int num) {
    // Convert the number to string representation
    std::string num_str = std::to_string(num);

    // Check if each digit of the number is either '0' or '1'
    for (char digit : num_str) {
        if (digit != '0' && digit != '1') {
            return false;
        }
    }

    return true;
}

bool checkMultiples(int n) {
    // Check multiples from 1 to 10 for simplicity, can be extended as needed
    for (int i = 1; i <= 10; ++i) {
        if (!isDecimalBinary(n * i)) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    if (checkMultiples(n)) {
        std::cout << "Yes, all digits of the multiples of " << n << " are decimal-binary." << std::endl;
    } else {
        std::cout << "No, not all digits of the multiples of " << n << " are decimal-binary." << std::endl;
    }

    return 0;
}
