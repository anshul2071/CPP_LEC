#include<iostream>
using namespace std;

class Class1{
    friend class Class2;
    private:
        int x;
    public:
        Class1(int a){
            x=a;
        }
};

class Class2{
    public:
        Class2(Class1 obj){
            cout<<"The value of the private member of myClass1 is : "<<obj.x<<endl;
        }
};

int main(){
    //creating an object of myClass1 and passing the value of "a" as 5
    Class1 obj1(5);
    //creating an object of myClass2 and passing the object of myClass1 as parameter
    Class2 obj2(obj1);
}