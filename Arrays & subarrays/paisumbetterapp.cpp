//Time complexity O(n)

#include<iostream>
using namespace std;
int main()
{
    int i, j, n, low, high, key;
    cin>>n;

    int a[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cin>>key;

    low = 0;
    high = n-1;
    while(low<high)
    {
        if(a[low]+a[high]>key)
        high--;
        else if(a[low]+a[high]<key)
        low++;
        else
        break;
    }
    cout<<"Sum of "<<a[low]<<" and "<<a[high]<<" gives key";
    return 0;
}