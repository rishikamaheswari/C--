#include<iostream>
using namespace std;
int main()
{
    int n1, n2;
    cout<<"Input 2 numbers";
    cin>>n1>>n2;
    cout<<"Enter +, -, *, / accordingly";
    char c;
    cin>>c;
    switch (c)
    {
    case '+':
        cout<<n1+n2;
        break;
    case '-':
        cout<<n1-n2;
        break;
    case '*':
        cout<<n1*n2;
        break;
    case '/':
        cout<<n1/n2;
        break;
    default:
        cout<<"Enter another operator";
        break;
    }
    return 0;
}