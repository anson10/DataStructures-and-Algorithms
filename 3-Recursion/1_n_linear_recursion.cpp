#include<iostream>
#include<vector>

std::vector<int> printNos(int x) {
    // Base case: If n is 0, return an empty vector
    if (x == 0) {
        return {};
    }
    std::vector<int> result = printNos(x - 1);

    result.push_back(x);
    return result;
}
int main()
{
    int n;
    std::cin>>(n);
    std::vector<int> result = printNos(n);

    for(auto it: result) {
        std::cout<< it<<" ";
    }
    return 0;
}