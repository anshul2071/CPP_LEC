#include<iostream>
using namespace std;

class Rough
{
    public:
    int a=1


};

int main()
{
  Rough r1;
  cout<<"primitive type increment"<<r1.a++;
  cout<<"userdefinde type increment"<<r1++;

}