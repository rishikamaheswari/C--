#include<iostream>
using namespace std;
int main()
{
    int i, n;
    cin>>n;
    for(i=2; i<n; i++)
    {
        if (n%i==0)
        {
            cout<<"Not prime";
            break;
        }
    }
    if(i==n)
    cout<<"Prime";
    return 0;
}