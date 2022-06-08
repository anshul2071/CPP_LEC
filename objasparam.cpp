#include<iostream>
 using namespace std;

 class student


{
    public:
    double marks;

    student (double x)
    {
        marks = x;

    }

   
    
};
 void displayData(student s1, student s2 )
    {
        double avg_marks;
        avg_marks = (s1.marks+s2.marks)/2;
        cout<<"The average marks of student is: "<< avg_marks;


    }

int main()
{

    student s1(85), s2(75);
    displayData(s1,s2);
    return 0;
}
