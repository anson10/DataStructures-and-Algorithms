#include <bits/stdc++.h> 
#include<iostream>
#include<cmath>

int armstrong(int x) {
    int original_num = x;
    int sum = 0;
    while(x>0)
    {
        int last_digit = x % 10;
        x = x/10;
        sum = sum + pow(last_digit,3);
    }    
    if (sum == original_num){
        return true;
    }
    else
    {
        return false;
    }
}

int main() 
{
    std::cout<<armstrong(19);

    return  0;
}