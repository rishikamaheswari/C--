//Repeatedly swap two adjacent elements if they are in wrong order
//sabse bada element last mei bhej rahe, phir second last and so on
//first loop, first iteration
//second loop, first pos to second last pos, plus 1 se compare ho raha and largest element put at last

//first loop, second iteration
//second loop, first pos to third last pos, plus 1 se compare ho raha and largest element put at second last pos
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
    for(j=1; j<n; j++)
    {
        for(i=0; i<n-j; i++)
        {
            if(a[i]>a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}