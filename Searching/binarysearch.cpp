#include<iostream>
using namespace std;
int main()
{
    int n, i, start, end, mid, key, flag=0;
    cin>>n;
    cin>>key;

    int a[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    mid=n/2;
    start=0;
    end=n;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(a[mid] == key)
        {
            flag=1;
            break;
        }
        else if(key > a[mid])
        start=mid+1;
        else if(key < a[mid])
        end=mid-1;
    }
    if(flag==1)
    cout<<"Found at "<<mid;
    else
    cout<<"Not found";
    return 0;
}

//Time complexity : O(logn base 2)