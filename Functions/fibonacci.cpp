#include<iostream>
using namespace std;

void fib(int n)
{
    int i, a=1, b=0, c=0;
    for(i=1; i<=n; i++)
    {
        cout<<c<<endl;
        c=a+b;
        a=b;
        b=c;
    }
    return;
}
int main()
{
    int n;
    cin>>n;
    
    fib(n);

    return 0;
}