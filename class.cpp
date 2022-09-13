#include<iostream>
using namespace std;

class abhijeet
{
    public:
   void multiplication()
    {
       int a,b,c;
       a=1;
       b=2;
       c=a*b;
       cout<<"Multiplication of a and b is ="<<c<<"\n";
    }
    void addition ();
    abhijeet()
    {
        cout<<"Hello Constructor \n";
    }
 
   
 
}xyz;

int main()
{
  //abhijeet xyz;
  cout<<"Welcome to the world \n";
  xyz.multiplication();
  xyz.addition();
  return 0;
}

void abhijeet::addition()
    {
       int a,b,c;
       a=1;
       b=2;
       c=a+b;
       cout<<"Addition of a and b is ="<<c<<"\n";
    }