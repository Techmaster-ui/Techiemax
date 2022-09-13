+#include<iostream>
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
    if(value=="italian")
    {
      cout<<"You have entered choice as italian \n";
    }
    else if(value=="spanish")
    {
      cout<<"You have entered choice as spanish \n";
    }
    else if(value=="snacks")
    {
      cout<<"You have entered choice as snacks \n";
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
       
    