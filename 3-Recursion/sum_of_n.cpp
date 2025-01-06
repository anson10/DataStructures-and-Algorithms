#include<iostream>

long long sumFirstN(long long n) {
if(n == 0)
{
return 0;
}
return n + sumFirstN(n-1);
}

int main()
{
    int n;
    std::cout<<"Enter a number :";

    std::cin>>n;
    std::cout<<sumFirstN(n);
}