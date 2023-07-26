//traverse through digits of binary number
//multiply each digit with increasing power of 2
//summation

#include<iostream>
#include <math.h>
using namespace std;

int binaryToDecimal(int n)
{
    int i, d, c=0, sum=0;
    for(i=n; i>0; i=i/10)
    {
        d=i%10;
        sum = sum + pow(2, c)*d;
        c++;
    }
    return sum;
}

int main()
{
    int n;
    cin>>n;

    cout << binaryToDecimal(n); 
    return 0;
}