#include<iostream>
using namespace std;

class Wall
{
private:
    double length;
    double height;
public:
    Wall(double len, double hght){
        //initialize private variables 
            length = len;
            height = hght;
    }
    // copy constructor with a wall object as parameter 
    // syntax to create copy constructor - classname(classname &objectname)
    Wall(Wall &obj){
        // initialize private variables 
        length = obj.length;
        height = obj.height;
    }
    double calculateArea(){
        return length*height;
    }
    
};

int main(){
    Wall wl1(3.5,1.0);
    Wall wl2(wl1); //w2 is a copy of w1
    cout<<wl1.calculateArea()<<endl;
    cout<<wl2.calculateArea()<<endl;

}