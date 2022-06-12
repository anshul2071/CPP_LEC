#include <iostream>
using namespace std;

class X
 {
     private:
     int Pvtdata1;
     protected:
     int protdata1;
     public:
     int pubdata1;

};

class Y: public X //Publicly derived.
{
    public:
    void func()
    {
        int a;
        a = Pvtdata1;  //error: not accesible
        a - protdata1; //ok
        a = pubdata1;  //ok
    }

};
class Z: protected X //Publicly derived.
{
    public:
    void func()
    {
        int a;
        a = Pvtdata1;  //error: not accesible
        a - protdata1; //ok
        a = pubdata1;  //ok
    }

};
class A: private X //Publicly derived.
{
    public:
    void func()
    {
        int a;
        a = Pvtdata1;  //error: not accesible
        a - protdata1; //ok
        a = pubdata1;  //ok
    }

};
int main()
{
    int num;
    Y ObjY;

    num = ObjY.Pvtdata1; //Error: not accesible
    num = ObjY.protdata1; //Error: not accesible
    num = ObjY.pubdata1;  //ok:pubdata is public to Y

    Z ObjZ;

    num = ObjZ.Pvtdata1; //Error: not accesible
    num = ObjZ.protdata1; //Error: not accesible
    num = ObjZ.pubdata1;  //error

    Y ObjA;

    num = ObjA.Pvtdata1; //Error: not accesible
    num = ObjA.protdata1; //Error: not accesible
    num = ObjA.pubdata1;  //error

    return 0;

}