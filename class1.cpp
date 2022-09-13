#include<iostream>
using namespace std;
class calc
{
   public:
    void addition()
    {
        int a=3 , b=4 , c;
        c=a+b;
        cout<<"Addition values of two numbers is "<<c<<"\n";
    }  
    void subs(int x , int y)
    {
        
        cout<<"Addition values of two numbers is "<<x-y<<"\n";
    }  
    calc(int x , int y)
    {
        cout<<"Multiplication is "<<x*y<<"\n";
    }
    void division();
};

void calc::division()
{
    int a=4,b=2;
    cout <<"Division is = "<<a/b ;
}   


int main()
{
   
   calc pqr(10,20);
   pqr.subs(40,10);
   pqr.addition();
   pqr.division();
   return 0;
}

    