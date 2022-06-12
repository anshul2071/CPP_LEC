#include <iostream>
using namespace std;

class Animal 
{
    public:
   
   void eat()
   {
       cout<<"Eating...."<<endl;

   }
};

   class Cat : public Animal
   {

       public:
       void meow(){

           cout<<"Meowing.....";
       }

   };

   int main()
   {
       Cat c1;
       c1.eat();
       c1.meow();
       return 0;
   }