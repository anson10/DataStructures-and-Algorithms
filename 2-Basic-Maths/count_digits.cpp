#include <bits/stdc++.h> 
#include<iostream>

int countDigit(long long x) {
    int count = 0;
    while(x>0)
    {
        int cnt = (int)(log10(x)+1);
        // int last_digit = x % 10;
        x = x / 10;
        count+=1;
    }
    return count;
}

int main() 
{
    countDigit(12345);
    return  0;
}