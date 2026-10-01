#include <iostream>

using namespace std;

class BankDeposit
{
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    BankDeposit(int, int, int);
    BankDeposit(int, int, float);
    BankDeposit(){}
    void display();
};


BankDeposit ::BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r) / 100;
    returnValue = principal;
    for (int i = 0; i < years; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}
BankDeposit ::BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < years; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}
void BankDeposit ::display()
{
    cout << "Principal was " << principal
         << ".After " << years << " years, "
         << "ROI is " << returnValue
         << endl;
}

int main()
{
    BankDeposit o1, o2;
    int p, y, r;
    float R;
    cout << "Enter p,y,r:" << endl;
    cin >> p >> y >> r;

    o1 = BankDeposit(p, y, r);
    o1.display();

    cout << "Enter p,y,R:" << endl;
    cin >> p >> y >> R;

    o2 = BankDeposit(p, y, R);
    o2.display();

    return 0;
}