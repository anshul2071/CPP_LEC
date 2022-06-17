//After overloading the operator it can be applied to the object in the same way as it is applied to the basic type//

#include<iostream>
using namespace std;

class count
{
    private:
    int value;
    public:
    count()
    {
        value = 5;

    }
    void operator++(int)
    {
        ++value;

    }

    void display()
    {
        cout<<"The Value is: "<<value<<endl;
    }
};
int main()
{
    count c1;
    c1.display();
    c1++;
    c1.display();
    return 0;
}