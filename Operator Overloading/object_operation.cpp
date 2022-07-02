#include<iostream>
using namespace std;

class A
{
    public:
    int a = 20;
    void display()
    {

        cout<<"The value of a is: "<<a<<endl;
        
        

    }

};

class B
{
    public:
    int b = 20;
    
    void displayX()
    {
    cout<<"The value of b is: "<<b<<endl;

    }
};

class C: public A, public B
{
    public:
    int sum = a+b;
    void displayZ()
    {
        cout<<"The sum of two number is: "<<sum<<endl;
    }


};

int main()
{
    A a;
    B b;
    C sum;

    sum.displayZ();
    return 0;



}
