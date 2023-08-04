//Given an unsorted array
//Find a continuous subarray which adds to a given number S.
//print starting and ending index of the subarray
#include<iostream>
using namespace std;
int main()
{
    int i, j, n, s, sum=0, flag=0;
    cin>>n;
    cin>>s;

    int a[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    {
        for(j=i; j<n; j++)
        {
            sum=sum+a[j];
            if(sum==s)
            {
                flag=1;
                break;
            }
        }
        sum=0;
        if(flag==1)
        break;
    }
    cout<<i<<" "<<j;
    return 0;
}