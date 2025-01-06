#include<iostream>

long long factorial(long long n) {
if(n == 0)
{
return 1;
}
else return n * factorial(n-1);
}

int main()
{
    int n;
    std::cout<<"Enter a number :";

    std::cin>>n;
    std::cout<<factorial(n);
}