//Max sum subarray with 0(n);

#include<iostream>
using namespace std;
int main()
{
    int i, j, n;
    cin>>n;

    int a[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int currentSum = 0;
    int maxSum = INT_MIN;
    for(i=0; i<n; i++)
    {
        currentSum = currentSum + a[i];
        if(currentSum<0)
        currentSum=0;
        maxSum = max(maxSum, currentSum);
    }
    cout<<maxSum;
    return 0;
}