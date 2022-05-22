#include <iostream>

using namespace std;

void norm(int a)
{
    a = 5;
    cout<<a<<endl;

}
void ref(int b)
{
    b = 10;
    cout<<b<<endl;

}
int main()
{
    int a=8, b=12;

    norm(a);
    ref(b);

    cout<<a<<endl;
    cout<<b<<endl;
    

}