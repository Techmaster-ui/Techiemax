#include<iostream>
using namespace std;

int main()
{
    int a , b , c , d , e , f , value;
    //string value;
    cout<<"Input value 1 for division \n";
    cout<<"Input value 2 for multiplication \n";
    cout<<"Please enter your preffered choice = ";
    cin>>value;
    if(value==1)
    {
        cout<<"Enter the value of 1st number = ";
        cin>>a;
        cout<<"Enter the value of 2nd number = ";
        cin>>b;
        c=a/b;
        cout<<"Division of 1st and 2nd number is = " << c << "\n";
    }
    else if(value==2)
    {
        cout<<"Enter the value of 1st number = ";
        cin>>d;
        cout<<"Enter the value of 2nd number = ";
        cin>>e;
        f=d*e;
        cout<<"The Multiplication of 1st and 2nd number is = " << f << "\n";
    }
        else
    {
        cout<<" You have not entered your choice preference ";
    }

    return 0;
}