#include<iostream>
using namespace std;

int main()
{
    int i,j,flg=0,pwd=0;
    string xyz,pqr,name[2] ={"Amit","Abhijit"},password[2]={"newuser","abhi@12345"};
    cout<<"Enter your Username to login into the School registration portal :- ";
    cin>> xyz;
    cout<<"Enter your password to login into the School registration portal :-";
    cin>>pqr;
    for ( i = 0; i <2; i++)
    {
       if (name[i]==xyz)
       {
        flg =1;
       }
    }
    if (flg==1)
    {
        for ( j = 0; j <2; j++)
        {
          if (password[j]==pqr)
          {
            pwd =1;
          }
        }
        if (pwd==1)
        {
            cout<<"Login Successfull"<<"\n";
        }
        else
        {
          cout<<"Invalid Password"<<"\n";
        }
    }
    else
    {
      cout<<"Invalid Username"<<"\n";
    }
    return 0 ;
}