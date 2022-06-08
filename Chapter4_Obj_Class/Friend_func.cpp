
#include<iostream>
using namespace std;

class Distance{
    friend int add(Distance);
    private:
        int meter;
    public:
        Distance(){
            meter = 0;
        }
};

//friend function definition

int add(Distance d){
    //accessing private member from the friend function
    d.meter = d.meter+5;
    return d.meter;
}

int main(){
    Distance d1;
    int meter = add(d1);
    cout<<"The private member of the class Distance is : "<<meter<<endl;
}