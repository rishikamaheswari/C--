#include<iostream>
using namespace std;

int fact(int n)
{
    int i, f=1;
    for(i=1; i<=n; i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{
    int n, i, j;
    cin>>n;
    for(i=0; i<n; i++)
    {
        for(j=0; j<=i; j++)
        {
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
    }
    return 0;
} 
