#include <iostream>
using namespace std;
class car
{
  public:
  static int x;
};

int car::x=10;

int main()
{
    cout<<car::x;
    return 0;
}