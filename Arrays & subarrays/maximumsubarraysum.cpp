//Print all subarrays

#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, n, c=0, sum=0, mx=0;
    cin>>n;

    int a[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    {
        while(c<n)
        {
            for(j=i; j<=c ;j++)
            {
                cout<<a[j]<<" ";
                sum = sum + a[j];
            }
            mx = max(sum, mx);
            sum=0;
            c++;
            cout<<endl;
        }
        c=0;
    }
    cout<<"Max sum ="<<mx;
    return 0;
}