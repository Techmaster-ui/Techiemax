#include<iostream>
using namespace std;

int main()
{
    int a , b , c , d;
    string value;
    cout<<"Welcome to Tullu's calculator \n";
   
    //value="yes";
    do
    {
     cout<<"Enter 1 for addition \n";
     cout<<"Enter 2 for substraction \n"; 
     cout<<"Enter 3 for multiplication \n"; 
     cout<<"Enter 4 for division \n"; 
     cout<<"Please enter your choice = ";
     cin>>d;
     if(d==1)
    {
        cout<<"Enter the value of 1st number = ";
        cin>>a;
        cout<<"Enter the value of 2nd number = ";
        cin>>b;
        c=a+b;
        cout<<"Addition of 1st and 2nd number is = " << c << "\n";
    }
    else if(d==2)
    {
       cout<<"Enter the value of 1st number = ";
        cin>>a;
        cout<<"Enter the value of 2nd number = ";
        cin>>b;
        c=a-b;
        cout<<"Substraction of 1st and 2nd number is = " << c << "\n";
    }
     else if(d==3)
    {
       cout<<"Enter the value of 1st number = ";
        cin>>a;
        cout<<"Enter the value of 2nd number = ";
        cin>>b;
        c=a*b;
        cout<<"Multiplication of 1st and 2nd number is = " << c << "\n";
    }
     else if(d==4)
    {
        cout<<"Enter the value of 1st number = ";
        cin>>a;
        cout<<"Enter the value of 2nd number and it should be non-zero = ";
        cin>>b;
        if(b!=0)
        {
          c=a/b;
          cout<<"Division of 1st and 2nd number is = " << c << "\n"; 
        }
        else 
        {
        cout<<"You are gadha and you have entered value as 0 despite asking for non-zero value for second number \n";
        }   
    }
    else 
    {
        cout<<"You have entered wrong choice \n";
    }
    cout<<"Do you want to continue \n" ;
    cout<<"To continue,enter value as yes else no = ";
    cin>>value;
    }
     while (value=="yes");

    return 0;
}