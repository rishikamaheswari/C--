#include<iostream>
using namespace std;
int main()
{
    int i, n;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        for(int j=n; j>=i; j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}