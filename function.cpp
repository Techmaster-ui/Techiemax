#include<iostream>
using namespace std;
int addition(int x,int y);
void multiplication(); 
//void ;

int main()
{   
    int x,y;
    cout<<"Enter the value of x = ";
    cin>>x;
    cout<<"Enter the value of x = ";
    cin>>y;
    cout<<"Addition of x and y is ="<< addition(x,y)<<"\n";

    multiplication();
    return 0;
}    
int addition(int x,int y)
{    
    return x+y;
}
void multiplication()
{
    int a,b,c;
    a=1;
    b=2;
    c=a*b;
    cout<<"Multiplication of a and b is ="<<c<<"\n";
}
