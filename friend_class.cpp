#include <iostream>

using namespace std;
class complex;

class calculator
{
    public:
        int sumRealNumber(complex, complex);
        int sumImgNumber(complex, complex);
};

class complex
{
    int a, b;
    friend class calculator;
    public:
        void setNumber(int, int);
        void displayNumber();
};


int calculator :: sumRealNumber(complex o1, complex o2)
{
    return o1.a + o2.a;

}
int calculator :: sumImgNumber(complex o1, complex o2)
{
    return o1.b + o2.b;

}
void complex ::setNumber(int n1, int n2)
{
    a = n1;
    b = n2;
}
void complex ::displayNumber()
{
    cout << a << " + " << b << "i" << endl;
}

int main()
{
    complex c1,c2;
    c1.setNumber(1,2);
    c1.displayNumber();

    c2.setNumber(3,4);
    c2.displayNumber();

    calculator calc;
    int real = calc.sumRealNumber(c1,c2);
    int img = calc.sumImgNumber(c1,c2);

    cout << "Result = " << real << " + " << img << "i" << endl;



    return 0;
}