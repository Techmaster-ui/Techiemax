#include <iostream>
using namespace std;

int main()
{
    int x=10;
    int* ptr=&x;
    cout<<"The value of x is "<<x<<"\n";
    cout<<"Memory address of x is "<<&x<<"\n";
    cout<<"Memory address of x using pointer is "<<ptr<<"\n";
    cout<<"Value of x using pointer is "<< *ptr <<"\n";
    return 0;
}