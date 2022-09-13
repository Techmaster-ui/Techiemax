#include<iostream>
using namespace std;

int main()
{
    int a=4 , b=5 ;
    cout<<"Before swapping"<<"\n";
    cout<<"The value of a="<<a<<"\n";
    cout<<"The value of b="<<b<<"\n";

    a=a+b;
    b=a-b;
    a=a-b;

    cout<<"After swapping"<<"\n";
    cout<<"The value of a="<<a<<"\n";
    cout<<"The value of b="<<b<<"\n";
    return 0;
}

