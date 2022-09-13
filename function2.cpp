#include<iostream>
using namespace std;
void division(int x , int y);
void division(int p , int q , int r);

int main()
{
    int x , y , p , q , r;
    division(x , y);
    division(p , q , r);
    return 0;
}
void division(int x , int y)
{
    cout<<"Enter the value of x = ";
    cin>>x;
    cout<<"Enter the value of y = ";
    cin>>y;
    cout<<"Division values of x and y is = "<<x/y;
}
void division(int p , int q , int r)
{
    cout<<"Enter the value of p = ";
    cin>>p;
    cout<<"Enter the value of q = ";
    cin>>q;
    cout<<"Enter the value of r = ";
    cin>>r;
    cout<<"multiplication values of p , q and r is = "<<p*q*r;
}

