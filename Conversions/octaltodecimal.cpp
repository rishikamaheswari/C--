//traverse through digits of octal number
//multiply each digit with increasing power of 8
//summation

#include <iostream>
#include <math.h>
using namespace std;

int octalToDecimal(int n)
{
    int i, d, c=0, sum=0;
    for(i=n; i>0; i=i/10)
    {
        d=i%10;
        sum = sum + pow(8,c)*d;
        c++;
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;

    cout<<octalToDecimal(n);

    return 0;
}