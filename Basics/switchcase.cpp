#include<iostream>
using namespace std;
int main()
{
    char button;
    cin>>button;
    switch (button)
    {
    case 'a':
        cout<<"Namaste";
        break;
    case 'b':
        cout<<"Hola";
        break;
    case 'c':
        cout<<"Ciao!";
        break;
    case 'd':
        cout<<"Salute!";
        break;
    default:
        cout<<"I am still learning more!";
        break;
    }
    return 0;
} 