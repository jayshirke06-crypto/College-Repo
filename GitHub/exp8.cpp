#include<iostream>
using namespace std;

class Student
{
protected:
    int roll;
    string name;

public:
    void getData()
    {
        cout<<"Enter Roll No: ";
        cin>>roll;
        cout<<"Enter Name: ";
        cin>>name;
    }
};

class Result : public Student
{
    float marks;

public:
    void getMarks()
    {
        cout<<"Enter Marks: ";
        cin>>marks;
    }

    void display()
    {
        cout<<"Roll No: "<<roll<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};

int main()
{
    Result r;
    r.getData();
    r.getMarks();
    r.display();
    return 0;
}