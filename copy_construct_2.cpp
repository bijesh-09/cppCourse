#include<iostream>

using namespace std;
// Not using explicit copy constructor, making compiler to create its own shallow default constructor
class Number
{
    int a;
    public:
    
    
    Number(int num)
    {
        a = num;
    }
    
    void display()
    {
        cout << "Number = " << a << endl;
    }
};

int main(){
    Number z(1);
    z.display();
    Number z1(z);
    z1.display();

    return 0;
}