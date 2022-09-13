#include<iostream>
using namespace std;

int main()
{
    int a , b;
    cout<<"Enter the value of a = " ;
    cin>>a;
    cout<<"Enter the value of b = " ;
    cin>>b;
    if (a>b)
    {
     cout<<"The value of a is greater than b " ;
    }
    else if (a==b)
    {
      cout<<"The values of a and b are equal " ;
    }
    else
    {
      cout<<"The value of a is lesser than b " ;
    }
    return 0;
}
