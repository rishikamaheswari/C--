#include<iostream>
using namespace std;

int nCr(int n)
{
    int i=1, f=1;
    for(i=1; i<=n; i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{
    int n, r;
    cin>>n>>r;

    int fn = nCr(n);
    int fr = nCr(r);
    int fdiff = nCr(n-r);

    cout<<(fn)/(fr*fdiff);

    return 0;
}