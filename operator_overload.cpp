#include <iostream>
using namespace std ;

class complex 
{
  public :
  int real , imag ;
  complex()
  {
    int a ,b ;
    a=0;
    b=0;
  }
  complex(int x , int y)
  {
    real = x;
    imag = y;
  }
  complex operator +(complex c)
  {
    complex temp;
    temp.real = real + c.real;
    temp.imag = imag + c.imag ;
    return temp;
  }
  void print()
  {
    cout<<"After operator overloading,the number is = "<<real<<"+"<<imag<<"i \n";
  }
};

int main ()
{
   complex c1(5,2);
   complex c2(8,7);
   complex c3(10,20);
   complex c4;

   c4=c1+c2+c3;  // first c2 and c3 will be added and then again the o/p will be added with c1. c1+c2 means c1.add(c2)
   c4.print();

}