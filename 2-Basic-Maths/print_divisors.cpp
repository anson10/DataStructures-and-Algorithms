#include<iostream>
#include<vector>
#include<algorithm>

void printDivisors(int n)
{
    std::vector<int> divisors;
    for(int i=1; i*i<=n; i++)
    {
        if(n%i==0)
        { 
            divisors.push_back(i);
            if((n/i)!=i)
            {
                 divisors.push_back((n/i));
            }
        }
    }
    std::sort(divisors.begin(), divisors.end());
    for(auto it: divisors) std::cout<<it<<' ';
}

int main()
{
    int size = 0;
    int num;
    std::cin >> num;

    printDivisors(num);
    return 0;
}
