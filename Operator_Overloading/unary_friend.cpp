#include <iostream>
using namespace std;

class UnaryFriend {
private:
int a,b,c;
public:
UnaryFriend()
{
    a=30;
    b=40;
    c=50;

}
void display()
{
    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;
    cout<<"c= "<<c<<endl;

}

void friend operator -(UnaryFriend u1)
{
    u1.a=-u1.a;
    u1.b=-u1.b;
    u1.c=-u1.c;



    
}
};

int main()
{
    UnaryFriend f1,f2;
    cout<<"Before overloading"<<endl;
    f1.display();
    -f1;
    cout<<"After overloading"<<endl;
    f1.display();
    return 0;

}
