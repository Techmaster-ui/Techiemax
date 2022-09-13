#include<iostream>
using namespace std;

int main()
{
    string value , loop;
    loop="yes";
    cout<<"Welcome to Abhijeet's restaurant \n";
    while(loop=="yes")
    {
      
    cout<<"Enter your choice = ";
    cin>>value;  
    if(value=="veg")
    {
      cout<<"You have entered choice as veg \n";
    }
    else if(value=="Non-veg")
    {
      cout<<"You have entered choice as nonveg \n";
    }
    else if(value=="mocktail")
    {
      cout<<"Mocktail peeyoge kya ? \n";
    }
    else 
    {
      cout<<"The selected choice is not in our menu \n";
    }
      cout<<"Do you want to continue ? = ";
      cin>>loop;
    }
       return 0;
}