#include <iostream>
using namespace std;

bool isPalindrome(string &s) {
    static int left = 0;                   // Start index for comparison
    int right = s.size() - left - 1;       // Calculate the corresponding right index

    if (left >= right) {                   // Base case: If indices meet or cross
        left = 0;                          // Reset `left` for future calls
        return true;
    }

    if (s[left] != s[right]) {             // If characters don't match
        left = 0;                          // Reset `left` for future calls
        return false;
    }

    left++;                                // Move to the next character on the left
    return isPalindrome(s);                // Recursive call
}

// Example usage
int main() {
    string str = "madam";
    if (isPalindrome(str)) {
        cout << "The string is a palindrome.\n";
    } else {
        cout << "The string is not a palindrome.\n";
    }

    string str2 = "hello";
    if (isPalindrome(str2)) {
        cout << "The string is a palindrome.\n";
    } else {
        cout << "The string is not a palindrome.\n";
    }

    return 0;
}
