//Find minimum element in unsorted array and swap it with element at beginning of unsorted array

//first loop, first pos
//second loop, second pos to last pos, finds smallest and swaps with first element

//first loop, second pos
//second loop, third pos to last pos, finds smallest and swaps with second element

#include<iostream>
using namespace std;
int main()
{
    int i, j, n, t;
    cin>>n;

    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[j]<a[i])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}