//Arithmetic array : Array that contains at least two integers and the difference between consecutive integers are equal
//Eg: [9,10], [3,3,3], [9,7,5,3] are arithmetic arrays.

//Question

//Array of N non-negative integers. ith integer of the array is Ai.
//determine the length of longest contiguous arithmetic subarray.

#include<iostream>
using namespace std;
int main()
{
    int i, j, n, d=0, c=1, curr_diff=0, prev=0, max_length=0, diff=0;
    cin>>n;

    int a[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    d = a[1]-a[0];
    for(i=1; i<n-1; i++)
    {
        if(a[i+1]-a[i] == d)
        {
            c++;
            max_length=c;
            diff=d;
        }
        else
        {
            if(c>prev)
            {
                max_length = c;
                diff = d;
            }
            prev = c;
            c=1;
            d = a[i+1]-a[i];
        }
    }
    cout<<"Max length "<<max_length+1;
    cout<<"Difference "<<diff;
    return 0;
}