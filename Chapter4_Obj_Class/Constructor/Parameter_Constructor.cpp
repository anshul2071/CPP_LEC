#include<iostream>
using namespace std;

class Wall{
    private:
        double length;
        double height;
    
    public:
        Wall(double len, double hght){
            //initialize private variables 
            length = len;
            height = hght;
        }

        double calculateArea(){
            return (length*height);
        }
};

int main(){
    Wall wl1(5,4);
    cout<<"The area of the wall is : "<<wl1.calculateArea()<<endl;
}