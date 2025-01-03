#include <bits/stdc++.h> 
#include<iostream>

int palindrome(int x) {
    int original_num = x;
    int reverseNum = 0;
    while(x>0)
    {
        int last_digit = x % 10;
        x = x/10;
        reverseNum = (reverseNum*10) + last_digit;
    }    
    if (reverseNum == original_num){
        return true;
    }
    else
    {
        return false;
    }
}

int main() 
{
    palindrome(101);

    return  0;
}