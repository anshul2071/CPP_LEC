#include <iostream>

using namespace std;

class mobile
{
    int m = 10;

    public:
         void display() {

             cout<<"m = "<<endl;
             cout<<"this->m= "<<this->m<<endl;
             cout<<"The address of the current object"<<this<<endl;
         }

};

int main()
{
    mobile m1, m2;
    m1.display(); //for m1 
    m2.display();  //for m2

    return 0;
    
}