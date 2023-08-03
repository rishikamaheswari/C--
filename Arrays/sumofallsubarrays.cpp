//Output sum of each subarray of the given array.

#include<iostream>
using namespace std;
int main()
{
    int i, j, n, s=0;
    cin>>n;

    int a[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    {
        for(j=i; j<n; j++)
        {
            s=s+a[j];
            cout<<s<<endl;
        }
        s=0;
    }
    return 0;
}