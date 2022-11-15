#include<bits/stdc++.h> 
using namespace std;  
long long divSum(long long num) 
{ 
    long long result = num;
    if(num==1)
    return result; 
    for (int i=2; i<=sqrt(num); i++) 
    { 
        if (num%i==0) 
        { 
            if (i==(num/i)) 
                result += i; 
            else
                result += (i + num/i); 
        } 
    } 
    // 1 is also a divisor 
    return (result + 1); 
} 
int main() 
{ 
   long long num ;
    cin>>num; 
    cout << divSum(num); 
    return 0; 
} 