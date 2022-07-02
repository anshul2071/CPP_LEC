#include<iostream>
using namespace std;

class A
{
    public:
    int a;
    void display()
    {
        cout<<"The value of a is: 5 "<<endl;
    }
};

class B : public virtual A
{
    public:
    void displayX()
    {
        cout<<"The value of a is: 5"<<endl;
    }

};

class C : public virtual A
{
    public:
    void displayY()
    {
        cout<<"The value of a is: 5 "<<endl;

    }

};
class D : public B, public C
{
    public: 
    void displayZ()
    {
        cout<<"The value of a is: 5 "<<endl;

    }

};

int main()
{
    D d1;
    d1.display();
    d1.displayX();
    d1.displayY();
    d1.displayZ();

    return 0;
}