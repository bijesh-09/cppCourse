#include <iostream>

using namespace std;
class complex;

class calculator
{
    int a ,b;
    public:
        calculator sumRealNumber(complex, complex);
        calculator sumImgNumber(complex, complex);
        void result();
};

class complex
{
    int a, b;
    friend calculator calculator :: sumRealNumber(complex,complex) ;
    friend calculator calculator :: sumImgNumber(complex,complex) ;

    public:
        void setNumber(int, int);
        void displayNumber();
};


calculator calculator :: sumRealNumber(complex o1, complex o2)
{
    calculator calc1;
    calc1.a = o1.a + o2.a;
    return calc1;
}
calculator calculator :: sumImgNumber(complex o1, complex o2)
{
    calculator calc2;
    calc2.b = o1.b + o2.b;
    return calc2;


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
void calculator :: result()
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

    calculator calc,obj;
    obj = calc.sumRealNumber(c1,c2);
    obj = calc.sumImgNumber(c1,c2);
    obj.result();



    return 0;
}