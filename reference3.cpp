#include<iostream>
using namespace std;

int main()
{
    int x;
    x=10;
    int &y=x;
    cout<<"The value of x is "<<x<<"\n";
    cout<<"The value of y is "<<y<<"\n";
    y=50;
    cout<<"The value of x is "<<x<<"\n";
    cout<<"The value of y is "<<y<<"\n";
    x=30;
    cout<<"The value of x is "<<x<<"\n";
    cout<<"The value of y is "<<y<<"\n";
    return 0;
}