#include<iostream>
using namespace std;

class Employee
{
protected:
    int id;
    string name;

public:
    void getEmp()
    {
        cout<<"Enter ID: ";
        cin>>id;
        cout<<"Enter Name: ";
        cin>>name;
    }
};

class Department : public Employee
{
protected:
    string dept;

public:
    void getDept()
    {
        cout<<"Enter Department: ";
        cin>>dept;
    }
};

class PF : public Department
{
    float pf;

public:
    void getPF()
    {
        cout<<"Enter PF Amount: ";
        cin>>pf;
    }

    void display()
    {
        cout<<"ID: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Department: "<<dept<<endl;
        cout<<"PF: "<<pf<<endl;
    }
};

int main()
{
    PF p;
    p.getEmp();
    p.getDept();
    p.getPF();
    p.display();
    return 0;
}