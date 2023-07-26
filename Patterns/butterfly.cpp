#include<iostream>
using namespace std;
int main()
{
    int i, j, n;
    cin>>n;
    int c=n*2-2;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            cout<<"*";
        }
        for(j=1; j<=c; j++)
        {
            cout<<" ";
        }
        c=c-2;
        for(j=1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    c=0;
    for(i=1; i<=n; i++)
    {
        for(j=n; j>=i; j--)
        {
            cout<<"*";
        }
        for(j=1; j<=c; j++)
        {
            cout<<" ";
        }
        c=c+2;
        for(j=n; j>=i; j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}