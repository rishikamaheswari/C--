//Insert an element from unsorted array to its correct position in sorted array

#include<iostream>
using namespace std;
int main()
{
    int i, j, n;
    cin>>n;

    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[n];
    }
    for(i=1; i<n; i++)
    {
        int current = a[i];
        int j=i-1;
        while(a[j]>current && j>=0)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1]=current;
    }
    return 0;
}