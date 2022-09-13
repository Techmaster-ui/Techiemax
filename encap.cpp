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

class learn:public example
{
   public:
   void msg()
   {
   cout<<"I am father" ;
   }
};



class unlearn:public learn
{
    public:
    void child()
    {
    cout<<"I am child" ;
    }
}; 

int main()
{
 // example ex ;
  learn ex;
  unlearn ex1; 
  ex.take_salary(20000);
  ex.print_salary();
  ex1.take_salary(20000);
  ex1.print_salary(); 
  return 0;
}