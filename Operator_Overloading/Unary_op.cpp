#include <iostream>
using namespace std;

class Unary
{
    private:
    int a,b,c;
    public:
    Unary(int x, int y, int z)
    {
        a=x;
        b=y;
        c=z;

    }
    void operator - ()
    {
        a= -a;
        b= -b;
        c= -c;

    }
    void display()
    {
        cout<<"Value of a is: "<<a<<endl;
        cout<<"Value of b is: "<<b<<endl;
        cout<<"Value of c is: "<<c<<endl;

    }

    
};

int main()
{
    Unary obj(-10,20,30);
    obj.operator-();
    obj.display();

    -obj;
    obj.display();
}