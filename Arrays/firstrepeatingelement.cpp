//Find the first repeating element in the array of integers, i.e., an element that occurs more than once and whose index of first occurrence is smallest.

#include<iostream>
using namespace std;
int main()
{
    int i, j, n, c=0, flag=0;
    cin>>n;

    int a[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(a[i]==a[j])
            c++;
            if(c>1)
            {
                flag=1;
                break;
            }
        }
        if(flag == 1)
        break;
    }
    cout<<i;
    return 0;
}