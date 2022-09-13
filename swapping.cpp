#include<iostream>
using namespace std;

int main()
{
    int x , y , tm;
    cout<<"Taking value of x = ";
    cin>>x;
    cout<<"Taking value of y = ";
    cin>>y; 
    cout<<"Before swapping the numbers"<<"\n";
    cout<<"The value of x=" << x << "\n";
    cout<<"The value of y=" << y << "\n";

    tm=x;
    x=y;
    y=tm;
    cout<<"After swapping the numbers"<<"\n"; 
    cout<<"The value of x=" << x << "\n";
    cout<<"The value of y=" << y << "\n";
    return 0;
}