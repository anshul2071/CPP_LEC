#include<iostream>
using namespace std;

class number{
    private:
        int a,b;
    public:
        number(int x,int y)
        {
            a=x;
            b=y;
        }

        int calculateSum()
        {
            return a+b;
        }
};

int main()
{
    number nox(4,4);
    cout<<"The sum is : "<<nox.calculateSum()<<endl;
    return 0;
}