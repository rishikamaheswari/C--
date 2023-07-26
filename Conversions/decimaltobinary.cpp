#include<iostream>
using namespace std;

int decimalToBinary(int n)
{
    int i, power=1;
    while(power<=n)
    {
        power = power*2;
    }
    power = power/2; //last condition false hone se pehle ek extra 2 multiply hua

}

int main()
{
    int n;
    cin>>n;

    cout<<decimalToBinary(n);
    return 0;
}