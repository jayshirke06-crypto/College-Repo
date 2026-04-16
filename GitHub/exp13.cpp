#include<iostream>
using namespace std;

class A
{
public:
    int x;

    void operator++()
    {
        x++;
    }

    void display()
    {
        cout<<"Value: "<<x<<endl;
    }
};

int main()
{
    A obj;
    obj.x = 10;
    ++obj;
    obj.display();
    return 0;
}