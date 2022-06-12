#include<iostream>
 
using namespace std;

class parents
{
    protected:
    int ID_protected;

};


class child : public parent
{
    public:
    int setId(int id )
    
    {
     
       ID_protected = id;


    }

    void displayID()
    {
        cout<<"Id_Protected is: "<<ID_protected<<endl;

    }

    
};

int main()
{
    child Obj1;

    Obj1.setId(25);
    Obj1.displayID();

    return 0;

}