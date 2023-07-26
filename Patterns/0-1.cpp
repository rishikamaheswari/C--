#include<iostream>
using namespace std;
int main()
{
    int i, j, n, c;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        if(i%2==1)
            c=1;
        else
            c=0;
        for(j=1; j<=i; j++)
        {
            cout<<c;
            if(c==1)
                c--;
            else
                c++;
        }
        cout<<endl;
    }
    return 0;
}