#include<iostream>

using namespace std;

class Base
{
    public:
    Base()
    {

        cout<<"This is destructor of base class."<<endl;


    }

    ~Base()
    {
        cout<<"This destructor of base class."<<endl;
    }
};

class Derived:public Base
{
   public:
   Derived()
   {
        cout<<"This destructor of base class."<<endl;
   }

   ~Derived()
   {
        cout<<"This destructor of base class."<<endl;
   }
};

int main()
{
    Derived d1;
    
}