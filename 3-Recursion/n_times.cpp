#include<iostream>
#include<vector>
#include<string>

std::vector<string> printNTimes(int n) {
    // Base case: If n is 0, return an empty vector
    if (n == 0) {
        return {};
    }
    std::vector<string> result = printNTimes(n - 1);

    result.push_back("Coding Ninjas");

    return result;
}
int main()
{
    int n;
    std::cin>>(n);
    printNTimes(n);
}