#include<iostream>
using namespace std;

int main()
{
    int i , x , flg;
    string kab_sikhoge;
    int rollno[i]= {1 , 2 , 3 , 4 , 5};
    flg = 0;
    cout<<"Enter Roll number = ";
    cin>>x;
    for ( i = 0; i <5; i++)
    {
       if (rollno[i]==x)
       {
        //flg =0;
        kab_sikhoge="Admission nahn hua";
       }
    }
    if (kab_sikhoge!="Admission nahn hua")
    {
      cout<<"Admission not accepted"<<"\n";
    }
    else
    {
      cout<<"Admission accepted"<<"\n";
    }
    return 0;
}