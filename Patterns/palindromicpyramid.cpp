#include<iostream>
using namespace std;
int main()
{
    int i, j, n, c=2;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        for(j=n; j>i; j--)
        {
            cout<<" ";
        }
        for(j=i; j>=1; j--)
        {
            cout<<j;
        }
        for(j=1; j<i; j++)
        {
            cout<<c;
            c++;
        }
        c=2;
        cout<<endl;
    }
    return 0;
}