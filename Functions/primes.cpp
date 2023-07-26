#include<iostream>
using namespace std;

bool isPrime(int n)
{
    int j;
    for(j=2;j<n;j++)
        {
            if(n%j==0)
            break;
        }
    if(j==n)
    return true;
    else
    return false;
}

int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        if(isPrime(i) == true)
        cout<<i<<endl;
    }
    return 0;
}
