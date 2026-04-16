#include<iostream>
using namespace std;

class Shape
{
public:
    virtual void area() = 0;
};

class Circle : public Shape
{
    float r;

public:
    void get()
    {
        cout<<"Enter radius: ";
        cin>>r;
    }

    void area()
    {
        cout<<"Area of Circle: "<<3.14*r*r<<endl;
    }
};

int main()
{
    Circle c;
    c.get();
    c.area();
    return 0;
}