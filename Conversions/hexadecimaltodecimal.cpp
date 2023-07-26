//traverse through digits of hexadecimal number
//multiply each digit with increasing power of 16
//summation
//check maths below

#include <bits/stdc++.h> //includes all headerfiles
using namespace std;

int hexadecimalToDecimal(string n)
{
    int sum=0, c=0, i;
    int s = n.size();
    for(i=s-1; i>=0; i--)
    {
        if(n[i]>='0' && n[i]<='9')
        {
            sum = sum + pow(16, c)*(n[i]-'0');
        }
        else if(n[i]>='A' && n[i]<='F')
        {
            sum = sum + pow(16, c)*(n[i]-'A' + 10);
        }
        c++;
    }
    return sum;
}
int main()
{
    string n;
    cin>>n;

    cout<< hexadecimalToDecimal(n) << endl;
    return 0;
}