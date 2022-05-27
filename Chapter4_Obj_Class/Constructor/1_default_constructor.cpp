#include <iostream>
using namespace std;

class construct
{
    public:
    int a,b;

    construct() 
    {
        
        cout<<"Constructor is called: " <<endl;
        a = 50;
        b=10;


    }

    void display()
    {
        cout<<"I am not a constructor. "<<endl;

    }
};

 int main()
    {
        construct c;
        c.display();

        return 0;

    }