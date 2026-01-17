#include <iostream>
using namespace std;
class student
{
private:
    int marks;

public:
    string name;
    int rollno;
    // seting marks / updating marks using function
    void setMarks(int m)
    {
        marks = m;
    }
    //getting marks in return to print
    int getMarks()
    {
        return marks;
    }
};
int main()
{
    student s1;
    s1.name = "Tarang Suryawanshi";
    s1.rollno = 70;
    s1.setMarks(95);
    cout << "Name: " << s1.name << endl;
    cout << "Roll No: " << s1.rollno << endl;
    cout << "Marks: " << s1.getMarks() << endl;
}