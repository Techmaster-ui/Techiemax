#include<iostream>
using namespace std;

int main()
{
    int i , j;
    for(i=3 ; i<=8 ; i++)
    {
      for(j=3 ; j<i ; j++)
       {
         cout<<"*";
       }
      cout<<"\n";
    } 
    return 0;
}