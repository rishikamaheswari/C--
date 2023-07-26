#include<iostream>
using namespace std;
int main()
{
    int i, j, n, c=1;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        for(j=n; j>=i; j--)
        {
            cout<<c;
            c++;
        }
        c=1;
        cout<<endl;
    }
    return 0;
}