#include <iostream>
using namespace std;


class Account 
{
    public:
    double salary = 100000;

};

class programmer: public Account
{
    public:
     double bonus()
     {
         double bonus = 10000;
         return bonus;


     }
};
int main()
{
   programmer p;
   cout<<"Salary is: "<<p.salary<<endl;
   cout<<"Bonus is: "<<p.bonus()<<endl;
   return 0;

}