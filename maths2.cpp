#include<iostream>
using namespace std;

int main()
{
    int a , b , c , d , e , f , g , value;
    cout<<"Input value 1 as division \n";
    cout<<"Input value 2 as multiplication \n";
    cout<<"Please enter your choice = ;
    cin>>value;
    if (value==1)
    {
        cout<<"Enter the value for 1st number = \n";
        cin>>a;
        cout<<"Enter the value for 2nd number = \n";
        cin>>b;
        c=a*b;
        cout<<"The Multiplication value of 1st and 2nd no = ";
    }
        else if(value==2)
        {
            cout<<"Enter the value for 1st number = \n";
            cin>>d;
            cout<<"Enter the value for 2nd number = \n";
            cin>>e;
            f=d/e;
            cout<<"The Division value of 1st and 2nd no = ";
        }
        else 
        {
            cout<<"You have not entered the correct option / choice ";
        }
            return 0;
}