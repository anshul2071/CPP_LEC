#include <iostream>
using namespace std;

class Helloworld 
{
    public:
    Helloworld()
    {
        cout<<"Constructor is called."<<endl;

    }
    ~Helloworld()
    {
        cout<<"Destructor is called"<<endl;

    }


  void display()
  {
      cout<<"Hello World"<<endl;
  }
};

  void main()
{
    Helloworld obj;
    obj.display();
}