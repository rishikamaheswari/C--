#include<iostream>
using namespace std;
int main()
{
    int i, j, n, m;
    cin>>n>>m;

    int a[n][m];

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cin>>a[i][j];
        }
    }
    int key;
    cin>>key;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(a[i][j]==key)
            {
                cout<<"Found at "<<i<<" "<<j;
                return 0;
            }
            else
            {
                cout<<"Not Found";
                return -1;
            }
        }
    }

    return 0;
}