#include<iostream>
#include<cmath>

using namespace std;

class Complex
{
    int a ,b;
    public:
        Complex(int , int);
        void display();
        friend float distance(Complex , Complex);
};

Complex :: Complex(int x, int y)
{
    a = x;
    b = y;
}

void Complex ::display() 
{
    cout << "(" <<  a  << "," << b << ")" << endl;
}

float distance(Complex o1, Complex o2)
{
    float in, out ;
    in = pow( ( o2.a - o1.a ),2 )   + pow( ( o2.b - o1.b ),2 );
    out = pow( in, 1.0/2.0 );
    return out;
}
int main(){
    
    Complex p= Complex(2,3);
    Complex q= Complex(4,6);
    p.display();
    q.display();

    float result = distance(p,q);

    cout << "The distance between two given points is: " << result << " sq.unit" << endl;

    return 0;
}