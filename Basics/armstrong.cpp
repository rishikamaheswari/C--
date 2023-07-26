//sum of cube of all digits = number

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int i, n, sum=0, d=0;
    cin>>n;
    for(i=n; i>0; i=i/10)
    {
        d=i%10;
        sum = sum + pow(d,3);
    }
    if(sum==n)
    cout<<"Armstrong";
    else
    cout<<"Not Armstrong";
    return 0;
}