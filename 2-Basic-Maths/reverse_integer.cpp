#include <bits/stdc++.h> 
#include<iostream>

int reverseInteger(int x) {
    int reverseNum = 0;
    while(x>0)
    {
        int last_digit = x % 10;
        x = x/10;
        reverseNum = (reverseNum*10) + last_digit;
    }    
    std::cout<<reverseNum;
    return reverseNum;

}

int main() 
{
    reverseInteger(1298533244);

    return  0;
}