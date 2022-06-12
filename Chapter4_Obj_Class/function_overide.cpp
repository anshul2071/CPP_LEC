#include<iostream>
using namespace std;

class Base
{
    public:
    void print()
    {
        cout<<"Base function: "<<endl;

    }
};

class Derived : public Base 
{
    public:
    void print()
    {
        cout<<"Derived function is: "<<endl;
    }
};

int main()
{
    Derived d1;
    d1.print();
    return 0;
    
}