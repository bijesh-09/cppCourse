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
    Number x,y,z(1);
    x.display();
    y.display();
    z.display();
    Number z1(z);
    z1.display();

    return 0;
}