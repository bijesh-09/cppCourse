#include <iostream>

using namespace std;

class complex
{
    int a, b;
    friend complex sumNumber(complex, complex);

public:
    void setNumber(int, int);
    void displayNumber();
};

void complex ::setNumber(int n1, int n2)
{
    a = n1;
    b = n2;
}
void complex ::displayNumber()
{
    cout << a << " + " << b << "i" << endl;
}

complex sumNumber(complex o1, complex o2)
{
    complex o3;
    o3.a = o1.a + o2.a;
    o3.b = o1.b + o2.b;
    return o3;
}

int main()
{
    complex c1, c2, sum;
    c1.setNumber(1, 2);
    c1.displayNumber();

    c2.setNumber(3, 4);
    c2.displayNumber();

    sumNumber(c1, c2).displayNumber();

    return 0;
}