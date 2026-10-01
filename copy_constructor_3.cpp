#include<iostream>

using namespace std;
//Using explicit default constructor, compiler is forced to use the explicit default constructor
class Number
{
    int a;
    public:
    Number()
    {
        a = 0;
    }
    
    Number(int num)
    {
        a = num;
    }
    Number(const Number &obj)
    {
        cout << "Copy constructor called!" << endl;
        a = obj.a;
    }
    void display()
    {
        cout << "Number = " << a << endl;
    }
};

int main(){
    Number x,y,z(1),z2;
    x.display();
    y.display();
    z.display();
    Number z1(z);
    z1.display();
    cout << "z2 before" << endl;
    z2.display();
    
    cout << "z2 after z copied to z2" << endl;
    
    z2 = z; // copy constructor not invoked since z2 is not being created or constructed, cuz z2 already existed
    z2.display();
    
    cout << "z3:" << endl;
    Number z3 = z; // copy constructor invoked as z3 is being created
    z3.display();

    return 0;
}