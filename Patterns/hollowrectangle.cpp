#include<iostream>
using namespace std;
int main()
{
    int i, j, rows, columns;
    cout<<"Enter rows";
    cin>>rows;
    cout<<"Enter columns";
    cin>>columns;
    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=columns; j++)
        {
            if(i==1 || i==rows)
            {
                cout<<"*";
                continue;
            }
            else
            {
                if(j==1 || j==columns)
                cout<<"*";
                else
                cout<<" ";
            }

        }
        cout<<endl;
    }
    return 0;
}