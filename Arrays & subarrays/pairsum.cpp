//Check if there exists two elements in an array such that their sum is equal to k

#include<iostream>
using namespace std;
int main()
{
    int i, j, n, key, flag=0;
    cin>>n;

    int a[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cin>>key;

    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]+a[j]==key)
            {
                cout<<"Sum of "<<a[i]<<" and "<<a[j]<<" gives key";
                return 0;
            }
        }
    }
}