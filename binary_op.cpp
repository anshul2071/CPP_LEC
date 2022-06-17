#include<iostream>

using namespace std;

class Binary
{  

    private:

    public:
    int a,b;
    Binary()
    {
        a=0;
        b=0;
    }

    Binary(int x,int y)
    {
        a=x;
        b=y;

    }
    Binary operator + (Binary bin ) 
    {
    Binary b1;
    cout<<"The value of a in overloading is: "<<a<<endl;
    cout<<"The value of b in overloading is: "<<b<<endl;
    cout<<"The value of bin a in overloading is: "<<bin.a<<endl;
    cout<<"The value of bin b in overloading is: "<<bin.b<<endl;
    //Calling object is passed implicitly and second object is passed through argument.//
    b1.a=a-bin.a;
    b1.b=b-bin.b;
    return b1;

    }
    void display()
    {
        cout<<"The value of a is: "<<a<<endl;
        cout<<"The value of b is: "<<b<<endl;

    }


};

int main()
{
     Binary b1,b2,b3;
     b1=Binary(10,20);
     b2=Binary(30,40);
     b3=b1+b2;
     b1.display();
     b2.display();
     b3.display();

     return 0;
}