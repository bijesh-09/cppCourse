#include <iostream>

using namespace std;

class Complex
{
    int a, b;

public:
    Complex()
    {
        a = 0;
        b = 0;
    }
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    Complex(int x)
    {
        a = x;
        b = 0;
    }
    void displayNumber()
    {
        cout << a << " + " << b << "i" << endl;
    }
};

int main()
{
    Complex c1(2, 3), c2, c3(4);
    c1.displayNumber();
    c2.displayNumber();
    c3.displayNumber();
    return 0;
}