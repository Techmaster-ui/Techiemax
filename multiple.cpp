#include <iostream>
using namespace std;

class example
{
  //private:
  
  public:
  
  int salary ;
  void take_salary(int x)
  {
    salary = x ; 
  }
  void print_salary()
  {
    cout<<"Salary is = "<<salary ;
  }
};

class learn 
{
   public:
   void msg()
   {
   cout<<"I am father" ;
   }
};



class unlearn 
{
    public:
    void child()
    {
    cout<<"I am child" ;
    }
};

class multiple:public example , public learn , public unlearn
{
   void multi()
    {
    cout<<"I am multi" ;
    }
};

int main()
{
  
  multiple mt ; 
  mt.take_salary(20000);
  mt.print_salary(); 
  mt.msg();
  mt.child();
  return 0;
}