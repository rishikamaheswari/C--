#include<iostream>
using namespace std;
int main()
{
    int i, n;
    cin>>n;

    int a[n], target;
    cin>>target;

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    {
        if(a[i]==target)
        break;
    }
    cout<<"Found at"<<i;
    return 0;
}

//Time complexity: O(n)
//Binary search used for better time complexity