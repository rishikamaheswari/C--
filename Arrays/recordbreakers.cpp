//Given : Number of visitors at a park on N consecutive days.
//Record Breaking day should satisfy both of these conditions : 
//1. Number of visitors on the day is strictly larger than the number of visitors on each of the previous days.
//2. Either it is the last day, or the number of visitors on the day is strictly larger than the number of visitors on the following day.
//First day ciuld be a record breaking day

//find number of record breaking days.
#include<iostream>
using namespace std;
int main()
{
    int i, j, n, c=0;
    cin>>n;

    int a[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<i; j++)
        {
            if(a[i]>a[j])
            c++;
        }
        if(c==i && (i==n-1 || a[i]>a[i+1]))
        cout<<a[i]<<" is a record-breaking number"<<endl;
        c=0;
    }
    return 0;
}