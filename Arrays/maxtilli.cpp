#include<iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int i, n, j, mx=0;
    cin>>n;

    int a[n];
    
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    mx=a[0];
    for(i=0; i<n; i++)
    {
        mx=max(mx, a[i]);
        cout<<mx<<endl;
    }
    return 0;
}