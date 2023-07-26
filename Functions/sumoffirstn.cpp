#include<iostream>
using namespace std;

void sum(int n)
{
    int i, sum=0;
    for(i=1; i<=n; i++)
    {
        sum=sum+i;
    }
    cout<<sum;
}
int main()
{
    int n;
    cin>>n;

    sum(n);

    return 0;
}