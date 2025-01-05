#include<iostream>
#include<vector>

void printNos(int x) {
    if(x==0) return;
    std::cout<<x<<" ";
    printNos(x-1);
}
int main()
{
    int n;
    std::cin>>(n);
    printNos(n);
}