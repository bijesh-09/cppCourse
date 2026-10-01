#include <iostream>

using namespace std;

class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int a, int b, int c);
    void getData();

} bro, pro;
void Employee ::setData(int a, int b, int c)
{
    this->a = a;
    this->b = b;
    this->c = c;
}

void Employee ::getData()
{
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;
    cout << "Value of c: " << c << endl;
    cout << "Value of d: " << d << endl;
    cout << "Value of e: " << e << endl;
}

int main()
{

    pro.setData(1, 2, 3);
    pro.d = 11;
    bro.e = 12;
    bro.getData();
    pro.getData();
    return 0;
}